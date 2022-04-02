#pragma once

#include <string>

namespace policy {
namespace languages {

class german {
protected:
  std::string do_greetings() const { return "Hallo"; }
};

} // namespace languages
} // namespace policy
