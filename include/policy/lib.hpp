#pragma once

#include <policy/languages.hpp>
#include <string>

namespace policy {
template <typename language> std::string foo() { return language::foo(); }
} // namespace policy
