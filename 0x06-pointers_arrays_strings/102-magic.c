#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * program prints a[2] = 98, followed by a new line
   * note:
   * - a is not allowed
   * - p is not allowed to be modify
   * - write only one statement
   * - not allowed to code anything else than this line of code
   */
  *(p + 5) = 98;
  /* ...so that this write 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
