#include <iostream>
#include <cstdlib>
#include <boost/algorithm/string.hpp>
#include "include/strops.hpp"
#include "include/def.hpp"
#include "include/ai_main.hpp"

int main() {
  std::string sysIn;
  std::cout << ">>> SiliconSM8 (AKA SSM, Silicon Soul Mate) v" << VERSION << " copyrighted under the M.I.T. license (2020). Type \"help\" to get started.\n";
  for (;;) {
    std::cout << ">>> ";
    getline(std::cin, sysIn);
    boost::to_lower(sysIn);
    strip(sysIn);
    if (sysIn == "help") std::cout << "COMMANDS:\nhelp: Presents this message\nexit: Quits program\nstart [-n: Deletes previous sessions before activation | -nf: Deactivates save files | -s {x}: Sets 'x' as location for save]: Activates AI";
    else if (sysIn == "exit") exit(0);
    else if (sysIn.substr(0, 5) == "start") {
      if (sysIn.length() == 5) AI("");
      else AI(sysIn.substr(6, sysIn.length() - 1).c_str());
    }
    else std::cout << "Command not recognized.";
    std::cout << std::endl;
  }
  return 0;
}