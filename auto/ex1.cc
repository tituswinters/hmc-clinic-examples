#include <map>

void f() {
  std::map<int, int> m;

  std::map<int, int>::iterator i = m.find(5);
}
