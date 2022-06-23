#include <stdio.h>
int main()
{
    int n, fcount = 0;
    
    printf("Input a number: \n");
    scanf("%d", &n);
    
    for (int i = 2; i <= n/2; i++) {
      if (n % i == 0) fcount++;
    }
    
    if (fcount >= 1)
      printf("The number is composite.");
    else
      printf("The number is prime.");
}