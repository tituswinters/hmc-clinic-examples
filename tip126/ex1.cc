#include <memory>

void f() {
  std::unique_ptr<int> upi(new int(42));
}
