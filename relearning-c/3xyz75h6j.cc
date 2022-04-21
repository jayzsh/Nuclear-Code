#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a == b && b == c && a == c)
      printf("All numbers are equal. \n");
    else if (a >= b && a >= c)
      printf("%d is the greatest number. \n", a); 
    else if (b >= a && b >= c)
      printf("%d is the greatest number. \n", b);
    else if (c >= a && c >= b) printf("%d is the greatest number. \n", c);
    
    if (a > 0 && b > 0 && c > 0)
      printf("All numbers are postive.");
    else if (a < 0 && b < 0 && c < 0)
      printf("All numbers are negative.");
    else
      printf("They are a mix of numbers.");
}