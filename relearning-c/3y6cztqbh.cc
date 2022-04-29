#include <stdio.h>
int main()
{
    int i; char str[100] = "";
    
    printf("Enter a string: \n");
    gets(str);
    
    for (i = 0; i < 100; i++)
      if (str[i] == '\0') break;
    
    printf("Length of string: %d", i);
}