#include <vector>
#include <fmt/core.h>
#include <string>

#include "repl.h"
#include "readline.h"

// Read, Evaluate, Print, Loop -> REPL

void lazybones_loop() {

  std::string line;

  std::vector<std::string> args;
  int status { 1 };

  do {
    fmt::print("🥱 > ");

    // [Read]
    line = read_line();
    fmt::print("You said: {}\n", line);
    // [Evaluate]
    //args = split_line(line);
    //status = execute(args);
  } while (status);
}
