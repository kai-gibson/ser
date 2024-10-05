#ifndef SER_H
#define SER_H

#include <iostream>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>
#include "macros.h"

#include <vector>


void set(double* ptr, rapidjson::Value& val);

void set(std::string* ptr, rapidjson::Value& val);

void set(int64_t* ptr, rapidjson::Writer<rapidjson::StringBuffer>& val);

void set(std::string* ptr, rapidjson::Writer<rapidjson::StringBuffer>& val);

void set(double* ptr, rapidjson::Writer<rapidjson::StringBuffer>& val);

void set(bool* ptr, rapidjson::Writer<rapidjson::StringBuffer>& val);

template <class T>
void set(std::vector<T>* ptr, rapidjson::Writer<rapidjson::StringBuffer>& val) {
  val.StartArray();

  for (T& elem : *ptr) set(&elem, val);
  val.EndArray();
}


void assign(double* ptr, rapidjson::Value& val);

void assign(std::string* ptr, rapidjson::Value& val);

void assign(int64_t* ptr, rapidjson::Value& val);

template <class T>
void assign(std::vector<T>* ptr, rapidjson::Value& val) {
  if (!val.IsArray()) {
    throw std::runtime_error("type error, json field is not array");
  }

  for (auto& elem : val.GetArray()) {
    ptr->push_back({});
    assign(&(ptr->back()), elem);
  }
}



class Archive {
 private:
  rapidjson::Document doc;

 public:
  rapidjson::Document& get_doc() { return doc; }

  //template <class ... Args>
  //void archive(Args&& ... args) {}
};

class IArchive : Archive {
 private:
  bool parsed;

 public:
  IArchive(std::string json);

  void parse_json(std::string json);

  template <class... Args>
  void archive(Args&&... args) {
    if (!parsed) throw std::runtime_error("no json to deserialise");

    (
        [&] {
          if (get_doc().HasMember(std::get<0>(args))) {
            assign(std::get<1>(args), get_doc()[std::get<0>(args)]);
          }
        }(),
        ...);
  }
};

class OArchive : Archive {
 private:
  std::string result;

 public:
  template <class... Args>
  void archive(Args&&... args) {
    rapidjson::StringBuffer s;
    rapidjson::Writer<rapidjson::StringBuffer> writer(s);
    writer.StartObject();
    (
        [&] {
          writer.Key(std::get<0>(args));
          set(std::get<1>(args), writer);
        }(),
        ...);

    writer.EndObject();
    result = s.GetString();
  }

  std::string& get_str();
};

// parse nested objects (probably slow!)
template <class T>
void assign(T* ptr, rapidjson::Value& val) {
  if (!val.IsObject()) {
    throw std::runtime_error("type error, json field is not object");
  }

  rapidjson::StringBuffer buf;
  rapidjson::Writer<rapidjson::StringBuffer> writer(buf);
  val.Accept(writer);

  IArchive iar(buf.GetString());
  ptr->serialize(iar);
}

class NestedArc : Archive {
public:
  rapidjson::Writer<rapidjson::StringBuffer>& writer;
  NestedArc(rapidjson::Writer<rapidjson::StringBuffer>& val) :writer(val) {}

  template <class... Args>
  void archive(Args&&... args) {
    writer.StartObject();
    (
        [&] {
          writer.Key(std::get<0>(args));
          set(std::get<1>(args), writer);
        }(),
        ...);

    writer.EndObject();
  }
};

// if is object
template <class T>
void set(T* ptr, rapidjson::Writer<rapidjson::StringBuffer>& val) {
  NestedArc na(val);

  ptr->serialize(na);
}

template <class T>
std::string to_json(T& obj) {
  OArchive oar;
  obj.serialize(oar);
  return oar.get_str();
}

template <class T>
T from_json(std::string json) {
  IArchive iar(json);
  T obj;
  obj.serialize(iar);
  return obj;
}

#endif  // SER_H
