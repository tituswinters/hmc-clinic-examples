#include <string>
#include <string_view>

void f(std::string_view sv) {}
void g(std::string_view s) { f(s); }
