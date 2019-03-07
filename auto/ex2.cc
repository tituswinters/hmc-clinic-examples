#include <memory>

void f() {
  std::unique_ptr<int> up = std::make_unique<int>(int(10));
}
