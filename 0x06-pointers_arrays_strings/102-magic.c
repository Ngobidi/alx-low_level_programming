#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * print your line of code
   * note:
   * - not allowed to use a
   * - not allowed to modify p
   * - write only one statement
   * - not allowed to code anything else than this line of code
   */
  *(p + 3) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", *(p + 3));
  return (0);
}
