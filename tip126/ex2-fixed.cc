#include <memory>

#include "absl/memory/memory.h"

void f() {
  std::unique_ptr<int> upi;
  upi = absl::make_unique<int>(42);
}
