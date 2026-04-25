#include "repl.h"

// `EXIT_SUCCESS`
#include <cstdlib>


int main (int argc, char *argv[]) {
  
  // [1] Initialize - Skip this part

  // [2] Interpret 
  lazybones_loop(); 

  // [3] Terminate - Clean free storage if needed
  return EXIT_SUCCESS;
}
