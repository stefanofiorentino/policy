#include <cassert>
#include <cstdlib>
#include <cstring>
#include <iostream>

#include <policy/lib.hpp>

template <typename language> using foo = policy::foo<language>;
using policy::languages::english;
using policy::languages::german;

int main(int, char **) {
  assert("Hello" == foo<english>().greetings() && "Should be in English");
  assert("Hello" != foo<german>().greetings() && "Should be in English");
  assert("Hallo" == foo<german>().greetings() && "Should be in German");
  assert("Hallo" != foo<english>().greetings() && "Should be in German");
  return EXIT_SUCCESS;
}