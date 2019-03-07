#include <string>
#include <string_view>

void f(std::string_view sv) {}
void g(const std::string& s) { f(s); }
