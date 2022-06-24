#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    
    printf("Enter a string: \n");
    gets(a);
    
    char
      *temp,
      *start = a,
      *end = a + (strlen(a) - 1) * sizeof(char);
      
    for (; start < end;) {
      temp = *end;
      *end = *start;
      *start = temp;
      
      start++; end--;
    }
    
    printf("Reversed string: \n%s", a);
}