#include <stdio.h>
int main()
{
      int i = 0;
      for (i = 100; i <= 200; i++){
            if (is_prime(i) == 1){
                  printf("%d\n", i);
            }
      }
      
      return 0;
}