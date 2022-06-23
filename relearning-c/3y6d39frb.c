#include <stdio.h>
int main()
{
    int i; char str[100] = "", str2[100] = "";
    
    printf("Enter a string: \n");
    gets(str);
    
    for (i = 0; str[i] != '\0'; i++)
      str2[strlen(str) - i - 1] = str[i];
      
    printf("%s", str2);
}