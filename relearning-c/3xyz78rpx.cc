#include <stdio.h>
int main()
{
    float e, m, s;
    printf("Percentage of marks obtained in English, Maths and Science: \n"); 
    scanf("%f%f%f", &e, &m, &s);
    
    if (e >= 80 && m >= 80 && s >= 80)
      printf("Eligible for Pure Science, Bio. Science and Commerce");
    else if (e >= 80 && m >= 60 && s >= 80)
      printf("Eligible for Bio. Science and Commerce only");
    else if (e >= 60 && m >= 60 && s >= 60)
      printf("Eligible for Commerce only");
    else
      printf("Not eligible");
}