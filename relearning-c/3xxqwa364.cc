#include <stdio.h>
int main()
{
    int marks;
    
    printf("Enter total marks: \n");
    scanf("%d", &marks);
    
    if (marks >= 90 && marks <= 100)
      printf("Grade is O");
    else if (marks >= 80)
      printf("Grade is E");
    else if (marks >= 70)
      printf("Grade is A");
    else if (marks >= 60)
      printf("Grade is B");
    else if (marks >= 50)
      printf("Grade is C");
    else if (marks >= 40)
      printf("Grade is D");
    else
      printf("Fail");
}