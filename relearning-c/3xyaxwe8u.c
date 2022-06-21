#include <stdio.h>
int main()
{
    float s, c;
    printf("Input sale amount: \n");
    scanf("%f", &s);
    
    if (s < 500) c = 35;
    else if (s <= 2000) c = 0.10 * s;
    else if (s < 5000) c = 0.15 * s;
    else if (s > 5000) c = 0.20 * s;
    printf("Commission is %f", c);
}