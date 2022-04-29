#include <stdio.h>

int isEqual(int a[], int b[])
{
    for (int i = 0; i <= 9; i++)
      if (a[i] != b[i])
        return 0; // false
    return 1; // true
}

int main()
{
    int a[100], b[100], x, y;
    
    for (int i = 0; i < 100; i++) {
      a[i] = 0;
      b[i] = 0;
    }
    
    printf("How many elements in array A? \n");
    scanf("%d", &x);
    printf("Enter the elements of A: \n");
    for (int i = 0; i < x; i++) {
      scanf("%d", &a[i]);
    }
    
    printf("How many elements in array B? \n");
    scanf("%d", &y);
    printf("Enter the elements of B: \n");
    for (int i = 0; i < y; i++) {
      scanf("%d", &b[i]);
    }
    
    if (isEqual(a, b))
      printf("A & B are equal");
    else
      printf("A & B are unequal");
}