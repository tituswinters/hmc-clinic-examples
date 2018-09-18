#include <memory>

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
  upfc.reset(FactoryConstructible::NewFC());
}
