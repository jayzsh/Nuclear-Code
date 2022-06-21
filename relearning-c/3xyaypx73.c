#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter angle measures of a triangle: \n");
    scanf("%f%f%f", &a, &b, &c);
    
    if (a + b + c == 180)
      printf("Triangle is possible");
    else
      printf("Triangle is not possible");
}