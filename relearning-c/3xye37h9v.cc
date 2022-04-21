#include <stdio.h>
int main()
{
    int a, sum = 0, i;
    
    printf("Enter 5 numbers: \n");
    
    for (i = 1; i <= 5; i++) {
      scanf("%d", &a);
      sum = sum + a; // sum is accumulator
    }
    
    float avg = sum / 5;
    printf("Average of the 5 numbers: %f", avg);
}