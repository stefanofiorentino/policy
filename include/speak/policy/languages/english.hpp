#pragma once

#include <string>

namespace policy {
namespace languages {

class english {
 protected:
  std::string do_greetings() const { return "Hello"; }
};

}  // namespace languages
}  // namespace policy
