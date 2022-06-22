#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    long double ti, payable;
    char name[60];
    
    printf("Enter name of citizen: \n");
    gets(name);
    printf("Enter age, Taxable Income (TI): \n");
    scanf("%d%llf", &age, &ti);
    
    if (age > 60) {
      printf("Wrong category");
      return;
    }
    
    if (ti <= 250000) payable = 0;
    else if (ti <= 500000) payable = (ti - 160000) * 0.10;
    else if (ti <= 1000000) payable = (ti - 500000) * 0.20 + 34000;
    else payable = (ti - 1000000) * 0.30 + 94000;
    
    printf("Payable tax of %s, aged %d with taxable income Rs %llf is: Rs %llf", name, age, ti, payable);
}