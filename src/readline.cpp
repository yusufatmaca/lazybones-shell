#include <iostream>
#include <string>

#include <fmt/core.h>
#include "readline.h"

std::string read_line() {
  std::string line;
  std::getline(std::cin, line);
  
  return line;
}
