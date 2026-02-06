#include <unistd.h>
#include <stdio.h>

int main() {
  char* args[] = {"alpaca", NULL};
  execvp("./nonsense", args);
                          // When this line runs, the WHOLE 
                          // PROGRAM is replaced by the arg0
                          // program. Nothing else in this
                          // file runs
  printf("Done executing\n");
}


// How many lines of ouput print? 0, 1, 2, 3, 4, more

