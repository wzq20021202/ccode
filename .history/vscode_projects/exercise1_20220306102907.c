#include <stdio.h>
int is_prime(int n)
{
      int j= 0;
      for (j = 2;j<n;j++){
            if (n%j==0){
                  return 0;
            }
      }
}
int main()
{
      int i = 0;
      for (i = 100; i <= 200; i++)
      {
            if (is_prime(i) == 1)
            {
                  printf("%d\n", i);
            }
      }
      return 0;
}