#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: \n\n");
    scanf("%d%d", &a, &b);
    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\nRemainder = %d", (a+b), (a-b), (a*b), (a/b), 3);
}