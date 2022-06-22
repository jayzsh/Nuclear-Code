#include <stdio.h>
int main()
{
    float m;
    int d;
    
    printf("Enter the sum of money (in Rupees) and duration (in days): \n");
    scanf("%f%d", &m, &d);
    
    if (d <= 180) printf("The maturity amount at 5.5%c is %f", 37, m + 0.055 * m);
    else if (d <= 364) printf("The maturity amount at 7.5%c is %f", 37, m + 0.075 * m);
    else if (d == 365) printf("The maturity amount at 9.0%c is %f", 37, m + 0.090 * m);
    else printf("The maturity amount at 8.5%c is %f", 37, m + 0.085 * m);
}