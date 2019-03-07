#include <vector>
#include <string>

std::vector<std::string> GetFoo() { return {}; }

void f() {
  std::vector v = GetFoo();
}
