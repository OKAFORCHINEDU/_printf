#include "main.h"
#include <limits.h>
#include <stdio.h>

int main(void) {
  int n = _printf("Hello %c %s %%", 'A', "Hakeem");
  printf("\nn = %d \n", n);

  return (0);
}