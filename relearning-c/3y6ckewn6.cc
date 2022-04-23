#include <stdio.h>

typedef int bool; // calling 'int' as 'bool'
#define TRUE 1 // calling 1 TRUE
#define FALSE 0 // calling 0 FALSE

void pfactors(int a)
{
    bool is_prime = FALSE, is_factor = FALSE;
    
    printf("Prime factors are: ");
    for (int i = 2; i <= a; i++) {
      is_factor = FALSE;
      is_prime = TRUE;
      
      if (a % i == 0) {
        is_factor = TRUE;
        
        for (int j = 2; j <= i/2; j++)
          if (i % j == 0) {
            is_prime = FALSE;
            break;
          }
        
        if (is_prime && is_factor)
          printf("[%d]", i);
      }
    }
}

void prime(int a)
{
    bool is_prime = TRUE;
    for (int i = 2; i <= a/2; i++)
      if (a % i == 0) {
        is_prime = FALSE;
        break;
      }
    
    if (is_prime)
      printf("%d is a prime number", a);
    else
      printf("%d is not a prime number", a);
}

int main()
{
    int a, ch;
    printf("Enter a number and state your choice of operation: \n");
    scanf("%d %d", &a, &ch);
    switch(ch) {
      case 1: pfactors(a); break;
      case 2: prime(a); break;
      default: printf("Invalid choice");
    }
}