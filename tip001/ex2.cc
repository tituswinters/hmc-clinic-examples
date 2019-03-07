#include <string>
#include <string_view>

void f(std::string_view sv) {}
void f(const std::string& s) {}
void g(const std::string& s) { f(s); }
