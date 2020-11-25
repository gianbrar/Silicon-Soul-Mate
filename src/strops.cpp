#include "include/strops.hpp"

void strip(std::string &str) { str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end()); }