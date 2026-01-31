# PA3 - The Pioneer Shell: Resubmission Due 11/20 at 11:59pm

### If you want to resubmit PA3, please read this section carefully. You need to pass all the tests in the original PA3, while also implementing an extra functionality.

Implement `pish` as originally described. Also update `pish` to support a new built-in command `!!` that re-executes the last non-`!!` command entered by the user.

The `!!` command should also be recorded in the command history, but should not affect what the "last" command is.

For example, if the user enters the following commands in sequence:

```bash
▶ history
1 history
▶ !!
1 history
2 !!
▶ pwd
/home/jpolitz/cse29fa25/pa3/Simple-Shell
▶ ls
Makefile  script.sh  pish  pish.c  pish.h  pish_history.c
pish_history.o  pish.o
▶ !!
Makefile  script.sh  pish  pish.c  pish.h  pish_history.c
pish_history.o  pish.o
▶ !!
Makefile  script.sh  pish  pish.c  pish.h  pish_history.c
pish_history.o  pish.o
▶ history
1 history
2 !!
3 pwd
4 ls
5 !!
6 !!
7 history
```

## Errors

For each of the following errors, call the `usage_error()` function in the starter code and continue to the next iteration of the loop.

- If the user enters `!!` as the very first command (there is no last command to execute).
- If the user enters `!! <anything>` (if argc != 1).

## Coding Style Resubmission

If you got a point off for coding style in the original PA3, you **do not** have to do the new functionality for that point.

Refer to the Piazza post for more details.
