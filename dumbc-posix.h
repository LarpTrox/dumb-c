#ifndef DUMBC
#define DUMBC

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef int num;
typedef char *str;
typedef float dec;

#define readyforinput() (char *)malloc(100 * sizeof(char))
#define donestr(VAR) free(VAR)
#define done() return 0
#define donecustom(VAR) return VAR
#define start() int main()
#define func void

void say_char(const char *message) { printf("%s\n", message); }
void say_num(num number) { printf("%d\n", number); }
void say_dec(dec number) { printf("%f\n", number); }

#define say(X)                                                                 \
  _Generic((X),                                                                \
      char *: say_char,                                                        \
      const char *: say_char,                                                  \
      int: say_num,                                                            \
      float: say_dec,                                                          \
      double: say_dec)(X)

void wait(num time) { sleep(time); }
void input_num(const char *prompt, int *var) {
  printf("%s", prompt);
  scanf("%d", var);
  while (getchar() != '\n')
    ;
}

void input_dec(const char *prompt, float *var) {
  printf("%s", prompt);
  scanf("%f", var);
  while (getchar() != '\n')
    ;
}

void input_str(const char *prompt, char *var) {
  printf("%s", prompt);
  fgets(var, 100, stdin);
  var[strcspn(var, "\n")] = 0;
}
#define input(PROMPT, VAR)                                                     \
  _Generic((VAR),                                                              \
      int *: input_num(PROMPT, (int *)(VAR)),                                  \
      float *: input_dec(PROMPT, (float *)(VAR)),                              \
      char *: input_str(PROMPT, (char *)(VAR)))

#endif /* DUMBC_H */
