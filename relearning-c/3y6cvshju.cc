#include <stdio.h>

void doSort(int a[], int size)
{
    for (int i = 0; i <= size - 1; i++)
      for (int j = 0; j <= size - i; j++)
        if (a[j] < a[j+1]) {
          int temp = a[j];
          a[j] = a[j+1];
          a[j+1] = temp;
      }
}

int main()
{
    int a[100], x;
    
    for (int i = 0; i < 100; i++)
      a[i] = 0;
    
    printf("How many elements in array A? \n");
    scanf("%d", &x);
    printf("Enter the elements of A: \n");
    for (int i = 0; i < x; i++) {
      scanf("%d", &a[i]);
    }
    
    printf("Original array: \n");
    for (int i = 0; i < x; i++) 
      printf("[%d] ", a[i]);
      
    doSort(a, x);
    
    printf("\nSorted array: \n");
    for (int i = 0; i < x; i++) 
      printf("[%d] ", a[i]);
}