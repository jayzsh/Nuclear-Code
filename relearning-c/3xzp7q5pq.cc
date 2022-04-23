#include <stdio.h>
int main()
{
    int n, sum = 0;
    float avg = 0;
    
    printf("Input a positive integer: \n");
    scanf("%d", &n);
    
    printf("\nThe first %d natural numbers are: \n", n);
    for (int i = 1; i <= n; i++) {
      printf("%d ", i);
      sum += i;
    }
    
    printf("\n\nTheir total sum is %d and average is %.2f", sum, (float)sum/n);
}