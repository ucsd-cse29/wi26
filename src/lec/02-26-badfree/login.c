#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct User {
  char* username;
  char passwd_sha[32];
} User;

static User users[1000];

void load_users(char* path) {
  FILE* f = fopen(path, "r");
  char buffer[10000];
  int i = 0;
  while(fgets(buffer, 10000, f) != NULL) {
    char* space = strchr(buffer, ' ');
    space[0] = '\0';
    char* username = malloc(strlen(buffer));
    strcpy(username, buffer);
    printf("%s@%p\n", username, username);
    User current_user = { username, {} };
    strncpy(current_user.passwd_sha, space + 1, 32);
    users[i] = current_user;
    i += 1;
    free(username);
  }
}

int main() {
  load_users("users.txt");
  char* username = malloc(7);
  printf("Enter your username: ");
  fgets(username, 6, stdin);
  username[strcspn(username, "\n")] = '\0';
  for(int i = 0; i < 1000; i += 1) {
    if(users[i].username == NULL) { break; }
    printf("%s@%p: %.32s\n", users[i].username, users[i].username, users[i].passwd_sha);
  }
}
