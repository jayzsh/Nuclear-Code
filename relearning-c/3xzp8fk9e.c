#include <stdio.h>
int main()
{
    int n, fcount = 0;
    
    printf("Input a number: \n");
    scanf("%d", &n);
    
    printf("Factors of %d are: \n", n);
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) printf("[%d]", i);
    }
}