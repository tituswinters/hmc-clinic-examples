#include <memory>

void f() {
  auto up = std::make_unique<int>(int(10));
}
