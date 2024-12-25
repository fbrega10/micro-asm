#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  printf("how many natural numbers do you want to sum ?\n");
  int c;
  scanf("%d", &c);
  if (c <= 0) {
    printf(
        "you clearly don't want to sum any number, huh? ok, then I'll quit..");
    return EXIT_FAILURE;
  }
  int counter = 0;
  for (int i = 0; i <= c; i++) {
    counter += i;
  }
  printf("here's the number you were trying to reach : %d\n", counter);

  return EXIT_SUCCESS;
}
