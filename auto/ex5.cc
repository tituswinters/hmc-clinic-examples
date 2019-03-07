#include <map>

void f() {
  std::map<int, int> some_map;
  int count = 0;
  for (const std::pair<int, int> item : some_map) {
    count += item.first + item.second;
  }
}
