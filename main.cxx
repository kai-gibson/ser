#include <iostream>
#include <vector>

#include "ser.h"
#include <fmt/core.h>

struct Data {
  std::string project;
  int64_t stars;
  std::vector<int64_t> nums;

  struct {
    int64_t test;
    std::string str;
    std::vector<std::string> list;

    //// specify fields to serialise
    SERIALISE(test, str, list);

    // ^ SERIALISE macro generates:
    //template <class Arc>
    //void serialize(Arc&& arc) {
    //  arc.archive(NVP(test), NVP(str), NVP(list));
    //}

  } obj;

  SERIALISE(project, stars, nums, obj);
};

int main() {
    Data d = from_json<Data>(R"(
      {
        "project": "rapidtest",
        "stars": 232,
        "nums": [
          1,
          2,
          3,
          4
        ],
        "obj": {
          "test": 123,
          "str": "testing",
          "list": ["list", "a", "b"]
        }
      }
    )");

    d.project = "testing this out";
    d.obj.str = "new string";

    fmt::println("{}", d.obj.test);
    fmt::println("{}", to_json(d));
}
