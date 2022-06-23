#include <stdio.h>
int main()
{
    int n, prod = 1;
    
    printf("Input a number: \n");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++)
      prod *= i;
    
    printf("%d! = %d", n, prod);
}