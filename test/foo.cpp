#include <cassert>
#include <cstdlib>
#include <cstring>
#include <iostream>

#include <policy/lib.hpp>

using ::policy::foo;
using ::policy::languages::english;
using ::policy::languages::german;

int main(int, char **) {
  assert(strcmp(foo<english>().c_str(), "Hello") == 0);
  assert(strcmp(foo<german>().c_str(), "Hallo") == 0);
  return EXIT_SUCCESS;
}