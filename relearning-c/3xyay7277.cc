#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter three sides of a triangle: \n");
    scanf("%f%f%f", &a, &b, &c);
    
    if (a == b == c) printf("Triange is equilateral.");
    else if (a == b || a == c || b == c) printf("Triangle is isosceles.");
    else printf("Triangle is scalene.");
}