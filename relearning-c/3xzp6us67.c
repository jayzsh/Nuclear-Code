#include <stdio.h>
int main()
{
    int n, ec = 0, oc = 0;
    printf("Input 10 numbers: \n");
    
    for (int i = 1; i <= 10; i++) {
      scanf("%d", &n);
      if (n % 2 == 0) ec++; else oc++;
    }
    
    printf("There are %d odd number(s) and %d even number(s).", oc, ec);
}