#include <stdio.h>
#define DIM 3

int main()
{
    int sum = 0, a[DIM][DIM];
    
    for (int i = 1; i <= DIM; i++)
      for (int j = 1; j <= DIM; j++)
        scanf("%d", &a[i-1][j-1]);
    
    for (int i = 1; i <= DIM; i++)
      for (int j = 1; j <= i; j++)
        sum += a[i-1][j-1];
    
    printf("Matrix: \n");
    for (int i = 1; i <= DIM; i++) {
      for (int j = 1; j <= DIM; j++)
        printf("[%d]", a[i-1][j-1]);
      printf("\n");
    }
    
    printf("Sum of lower triangle: %d", sum);
}