#include <stdio.h>
int main()
{
    int i, s;
    for (i = 1, s = 0; i <= 10; i++)
      s = s + i;
    printf("Sum of first 10 natural numbers: %d", s);
}