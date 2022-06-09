#include <stdio.h>

int is_in(int x, int y[], int size)
{
  for (int i = 0; i < size; i++)
    if (y[i] == x)
      return 1;
  return 0;
}

int main()
{
  int arr[500], strp[500], size, c = 0;
  
  printf("Enter no. of elements: \n");
  scanf("%d", &size);
  printf("Enter array elements: \n");
  for (int i = 0; i < size; i++)
    scanf("%d", &arr[i]);
  
  for (int i = 0; i < size; i++)
    if (!is_in(arr[i], strp, c))
      strp[c++] = arr[i];
  
  printf("No. of duplicates is: %d", size - c);
}