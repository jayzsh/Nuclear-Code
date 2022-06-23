#include <stdio.h>
#define MAX 5

int main()
{
    int m[MAX][MAX], r, c;

    printf("Input #rows & #columns of the matrix (both less than %d): \n", MAX+1);
    scanf("%d%d", &r, &c);
    
    printf("Input elements of the matrix (rows x columns): \n");
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++) {
        printf("element[%d][%d]: \n", i, j);
        scanf("%d", &m[i][j]);
      }
      
    printf("Original matrix: \n");
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        printf("%d ", m[i][j]);
      }
      printf("\n");
    }
    
    printf("Transpose of the matrix: \n");
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        printf("%d ", m[j][i]);
      }
      printf("\n");
    }
}