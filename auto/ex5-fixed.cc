#include <map>

void f() {
  std::map<int, int> some_map;
  int count = 0;
  for (const auto& item : some_map) {
    const int& key = item.first;
    const int& value = item.second;
    count += key + value;
  }
}
