#include <cassert>
#include <cstdlib>
#include <cstring>
#include <iostream>

#include <policy/lib.hpp>

template <typename language> using foo = ::policy::foo<language>  ;
using ::policy::languages::english;
using ::policy::languages::german;

int main(int, char **) {
  assert(strcmp(foo<english>().greetings().c_str(), "Hello") == 0);
  assert(strcmp(foo<german>().greetings().c_str(), "Hallo") == 0);
  return EXIT_SUCCESS;
}