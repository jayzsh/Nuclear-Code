#include <stdio.h>
int main()
{
    float t;
    printf("Enter temperature: \n");
    scanf("%f", &t);
    
    if (t < 0) printf("Freezing temperature");
    else if (t <= 10) printf("Very cold weather");
    else if (t <= 20) printf("Cold weather");
    else if (t <= 30) printf("Normal temperature");
    else if (t <= 40) printf("Hot weather");
    else printf("It's very hot");
}