#include <memory>

void f() {
  std::unique_ptr<int> upi;
  upi.reset(new int(42));
}
