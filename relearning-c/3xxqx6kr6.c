#include <stdio.h>
int main()
{
    int a;
    
    printf("Enter a number: \n");
    scanf("%d", &a);
    
    if (a < 0) printf("Absolute value: %d", -a);
    else printf("Absolute value: %d", a);
}