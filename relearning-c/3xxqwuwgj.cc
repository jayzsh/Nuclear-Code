#include <stdio.h>
int main()
{
    int a, b;
    
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    
    if (a%b == 0)
      printf("%d is divisible by %d, quotient is %d", a, b, (a/b));
    else
      printf("Division is not possible");
}