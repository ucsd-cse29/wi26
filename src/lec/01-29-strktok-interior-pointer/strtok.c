#include <stdio.h>
#include <string.h>

// char *strtok(char *str, const char *delim);
// Returns a pointer to the next token in str, delimited by delim.
// First call: pass the string. Subsequent calls: pass NULL.
// Replaces delim with '\0'returns pointer into original string.

int main() {
  char str[] = "Joe Politz,jpolitz@ucsd.edu,Instructor";
  printf("str@%p: %p \"%s\"\n", &str, str, str);

  char* a = strtok(str, ",");
  char* b = strtok(NULL, ",");
  char* c = strtok(NULL, ",");
  char* d = strtok(NULL, ",");

  printf("a@%p: %p \"%s\"\n", &a, a, a);
  printf("b@%p: %p \"%s\"\n", &b, b, b);
  printf("c@%p: %p \"%s\"\n", &c, c, c);
  printf("d@%p: %p\n", &d, d);

  printf("\nstr after strtok:\n");
  for (int i = 0; i < 39; i++) {
    if (i % 8 == 0) printf("%p:", &str[i]);
    if (str[i]) printf(" '%c'", str[i]);
    else printf(" NUL");
    if (i % 8 == 7) printf("\n");
  }
  printf("\n");
}
