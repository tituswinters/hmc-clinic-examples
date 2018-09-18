#include <memory>

#include "absl/memory/memory.h"

void g(int*);
void f() {
  auto i = absl::make_unique<int>(17);
  g(i.get());
}
