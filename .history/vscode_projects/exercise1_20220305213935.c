#include <stdio.h>
int main()
{
      int a = 0;
      int *pa = &a;
      *pa = 20;
      printf("%d\n,a");
      return 0;
}