#include <stdio.h>
int main()
{
    int a;
    int div3 = 0, div5 = 0; 
    
    printf("Enter a number: \n");
    scanf("%d", &a);
    
    if (a % 3 == 0) div3 = 1;
    if (a % 5 == 0) div5 = 1;
    
    if (div3 && div5) printf("Divisible by 3 as well as 5");
    else if (div3 && !div5) printf("Divisible by 3 but not by 5");
    else if (!div3 && div5) printf("Divisible by 5 but not by 3");
    else printf("Divisible neither by 3 nor by 5");
}