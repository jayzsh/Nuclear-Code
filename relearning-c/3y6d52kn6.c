#include <stdio.h>
#define MAX 5

int main()
{
    int m1[MAX][MAX], m2[MAX][MAX], dim;

    printf("Input the size of the square matrix (m, n): \n", MAX+1);
    scanf("%d%d", &a, &b);
    
    printf("Input elements of M1 (rows x columns): \n");
    for (int i = 0; i < a; i++)
      for (int j = 0; j < b; j++) {
        printf("element[%d][%d]: \n", i, j);
        scanf("%d", &m1[i][j]);
      }
      
    printf("Input elements of M2 (rows x columns): \n");
    for (int i = 0; i < a; i++)
      for (int j = 0; j < b; j++) {
        printf("element[%d][%d]: \n", i, j);
        scanf("%d", &m2[i][j]);
      }
    
    printf("First matrix: \n");
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++) {
        printf("%d ", m1[i][j]);
      }
      printf("\n");
    }
    
    printf("Second matrix: \n");
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++) {
        printf("%d ", m2[i][j]);
      }
      printf("\n");
    }
    
    printf("Sum of two matrices: \n");
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++) {
        printf("%d ", m1[i][j] + m2[i][j]);
      }
      printf("\n");
    }
}