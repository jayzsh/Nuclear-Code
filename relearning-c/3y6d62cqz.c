#include <stdio.h>
#define MAX 5

int main()
{
    int m[MAX][MAX], dim, row_sum[MAX], col_sum[MAX];

    printf("Input the size of the square matrix (less than %d): \n", MAX+1);
    scanf("%d", &dim);
    
    printf("Input elements of the matrix (rows x columns): \n");
    for (int i = 0; i < dim; i++)
      for (int j = 0; j < dim; j++) {
        printf("element[%d][%d]: \n", i, j);
        scanf("%d", &m[i][j]);
      }
      
    // summing the rows
    int a = 0;
    for (int i = 0; i < dim; i++) {
      for (int j = 0; j < dim; j++)
        a += m[i][j];
      
      row_sum[i] = a;
      a = 0;
    }
    
    // summing the columns
    int b = 0;
    for (int i = 0; i < dim; i++) {
      for (int j = 0; j < dim; j++)
        b += m[j][i];
      
      col_sum[i] = b;
      b = 0;
    }
    
    // display
    printf("The sum of the rows and the columns: \n");
    for (int i = 0; i < dim; i++) {
      for (int j = 0; j < dim; j++)
        printf("%d   ", m[i][j]);
      printf("   =   %d\n", row_sum[i]);
    }
    for (int i = 0; i < dim; i++)
        printf("---");
    printf("\n");
    for (int i = 0; i < dim; i++)
        printf("%d  ", col_sum[i]);
}