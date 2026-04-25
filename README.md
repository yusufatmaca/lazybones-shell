# Source: https://brennan.io/2015/01/16/write-a-shell-in-c/

### Basic lifetime of a shell 
  i. Initialize
    Read and execute its configuration file(s).
  ii. Interpret
    Read commands from `stdin` and execute them.
  iii. Terminate
    Shutdown commands, free up any memory, and terminate

