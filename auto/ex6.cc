#include <map>

void f() {
  std::map<int, int> some_map;
  int count = 0;
  for (std::pair<int, int> item : some_map) {
    item.first += item.second;
  }
}
