#pragma once

#include <policy/languages.hpp>
#include <string>

namespace policy {

template <typename language> class foo : private language {
public:
  std::string greetings() const { return do_greetings(); }

private:
  using language::do_greetings;
};
} // namespace policy
