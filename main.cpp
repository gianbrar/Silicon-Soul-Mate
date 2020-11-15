#include <iostream>
#include <string>
#include "include/def.hpp"

int main() {
  std::cout << "Silicon Soul Mate v" << VERSION << " copyrighted under the M.I.T. license (2020).\n";
  for (;;) {
    std::cout << "> ";
  }
  return 0;
}