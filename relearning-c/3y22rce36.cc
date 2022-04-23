#include <stdio.h>
int main()
{
  int id, units;
  char name[50]; // 50 is arbitrary maximum length of array
  float rate, amt, surch;
  
  printf("Enter customer ID: \n");
  scanf("%d ", &id);
  printf("Enter name: \n");
  gets(name);
  printf("Enter units comsumed: \n");
  scanf("%d", &units);
  
  if (units <= 199)
    rate = 1.20;
  else if (units < 400)
    rate = 1.50;
  else if (units < 600)
    rate = 1.80;
  else if (units >= 600)
    rate = 2.00;
    
  amt = units * rate;
  
  if (amt > 400)
  {
    surch = 0.15 * amt;
    amt = amt + surch;
  }
  
  if (amt < 100)
    amt = 100;
    
  printf("Customer ID No. : %d \n", id);
  printf("Customer Name   : %s \n", name);
  printf("Units consumed  : %d \n\n", units);
  printf("Amount charged @Rs. %.2f per unit : Rs. %.2f \n", rate, (units * rate));
  printf("Surcharge amount : Rs. %.2f \n", surch);
  printf("Total amount to be paid : Rs. %.2f", amt);
}