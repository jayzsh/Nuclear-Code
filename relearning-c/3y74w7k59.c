#include <stdio.h>
int main()
{
    float amt = 0;
    int id, u;
    char name[50];
    
    printf("Enter customer ID: \n");
    scanf("%d\n", &id);
    printf("Enter name: \n");
    gets(name);
    printf("Enter units consumed: \n");
    scanf("\n%d", &u);
    
    if (u < 200)
      amt = 1.2 * u;
    else if (u < 400)
      amt = 1.5 * u;
    else if (u < 600)
      amt = 1.8 * u;
    else if (u >= 600)
      amt = 2.0 * u;
      
    if (amt > 400)
      amt += amt * 0.15;
    
    if (amt < 100)
      amt = 100;
      
    printf("\nCustomer ID: %d", id);
    printf("\nCustomer name: %s", name);
    printf("\nAmount payable: %.2f", amt);
}