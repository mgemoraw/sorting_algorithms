#include <stdio.h>

int f(int n)
{
     int i;
     int j;
    int complexity =0;
     for (i = 0; i < n; i++)
     {
          for (j = i + 1; j < n; j++)
          {
            //    printf("[%d] [%d]\n", i, j);
               complexity++;
          }

     }
     return (complexity);
}

int main(void) {
    int n = 20;

    printf("n: %d and (n^2-n)/2: %i\n", f(n), (n*n - n)/2);
}

