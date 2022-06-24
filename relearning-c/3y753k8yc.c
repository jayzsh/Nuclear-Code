#include <stdio.h>
#include <string.h>

int main()
{
    int a[1000], n;
    
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for (int i = 1; i <= n; i++)
      scanf("%d", &a[i-1]);
    
    printf("Reversed array: \n");
    for (int i = n - 1; i >= 0; i--)
      printf("[%d] ", a[i]);
}