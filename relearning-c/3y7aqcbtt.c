#include <stdio.h>
int main()
{
  int n = 5; // no. of rows
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) printf("  ");
    for (int k = 1; k <= 2*i - 1; k++) printf("%c ", 'A' + 2*i - 2);
    printf("\n");
  }
}