#include <string>

#include "ser.h"

void assign(double* ptr, rapidjson::Value& val) {
  if (!val.IsDouble()) {
    throw std::runtime_error("type error, json field is not double");
  }
  *ptr = val.GetDouble();
}

void assign(std::string* ptr, rapidjson::Value& val) {
  if (!val.IsString()) {
    throw std::runtime_error("type error, json field is not string");
  }
  *ptr = val.GetString();
}

void assign(int64_t* ptr, rapidjson::Value& val) {
  if (!val.IsInt64()) {
    throw std::runtime_error("type error, json field is not int");
  }
  *ptr = val.GetInt64();
}

void set(double* ptr, rapidjson::Value& val) { *ptr = val.GetDouble(); }

//void set(std::string* ptr, rapidjson::Value& val) {
//  if (!val.IsString()) {
//    throw std::runtime_error("type error, json field is not string");
//  }
//  *ptr = val.GetString();
//}

void set(int64_t* ptr, rapidjson::Writer<rapidjson::StringBuffer>& val) {
  val.Int64(*ptr);
}

void set(std::string* ptr, rapidjson::Writer<rapidjson::StringBuffer>& val) {
  val.String(ptr->c_str());
}

void set(double* ptr, rapidjson::Writer<rapidjson::StringBuffer>& val) {
  val.Double(*ptr);
}

void set(bool* ptr, rapidjson::Writer<rapidjson::StringBuffer>& val) { val.Bool(*ptr); }

IArchive::IArchive(std::string json) { parse_json(json); }

void IArchive::parse_json(std::string json) {
  get_doc().Parse(json.c_str());
  if (get_doc().HasParseError()) {
    throw std::runtime_error("failed to parse json");
  }
  parsed = true;
}

std::string& OArchive::get_str() {
  if (result == "") throw std::runtime_error("no value");
  return result;
}


