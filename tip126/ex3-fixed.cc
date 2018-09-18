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
  std::unique_ptr<FactoryConstructible> upfc;
  upfc = absl::WrapUnique(FactoryConstructible::NewFC());
}
