#include <cassert>
#include <cstdlib>
#include <iostream>

#include <speak/speak.hpp>

template <typename language> using speak = policy::speak<language>;
using policy::languages::english;
using policy::languages::german;

int main(int, char **) {
  assert("Hello" == speak<english>().greetings() && "Should be in English");
  assert("Hello" != speak<german>().greetings() && "Should be in English");
  assert("Hallo" == speak<german>().greetings() && "Should be in German");
  assert("Hallo" != speak<english>().greetings() && "Should be in German");
  return EXIT_SUCCESS;
}