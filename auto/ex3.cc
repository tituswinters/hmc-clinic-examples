#include <string>
#include <vector>

void f() {
  std::vector<std::string> v = {"foo", "bar", "baz"};
  for (const std::string& i : v) { }
}
