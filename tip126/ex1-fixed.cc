#include <memory>

#include "absl/memory/memory.h"

void f() {
  auto upi = absl::make_unique<int>(42);
}
