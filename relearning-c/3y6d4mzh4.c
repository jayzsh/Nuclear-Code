#include <stdio.h>
int main()
{
    int m[3][3];
    printf("Input elements (rows x columns): \n");
    
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++) {
        printf("element[%d][%d]: \n", i, j);
        scanf("%d", &m[i][j]);
      }
      
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        printf("%d ", m[i][j]);
      }
      printf("\n");
    }
}