#include <memory>

#include "absl/memory/memory.h"

class FactoryConstructible {
 public:
  static FactoryConstructible* NewFC() {
    return new FactoryConstructible();
  }

 private:
  FactoryConstructible() {}
};

void f() {
  auto upfc = absl::WrapUnique(FactoryConstructible::NewFC());
}
