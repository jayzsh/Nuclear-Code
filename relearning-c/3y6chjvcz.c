#include <stdio.h>

void summ(int a, int b)
{
    printf("Sum is: %d", (a + b));
}

void diff(int a, int b)
{
    printf("Difference is: %d", (a - b));
}

void prod(int a, int b)
{
    printf("Product is: %d", (a * b));
}

void quot(int a, int b)
{
    printf("Quotient is: %d", (a / b));
}

int main()
{
    int a, b; char ch;
    printf("Enter the problem (in form \'A<OPERATOR>B\', wwhere operator belongs to {'+', '-', '*', '/'}): \n");
    scanf("%d%c%d", &a, &ch, &b);
    switch(ch) {
      case '+': summ(a, b); break;
      case '-': diff(a, b); break;
      case '*': prod(a, b); break;
      case '/': quot(a, b); break;
      default: printf("Invalid choice");
    }
}