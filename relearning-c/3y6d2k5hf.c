#include <stdio.h>
int main()
{
    int i1, i2; char str[100] = "", str2[100] = "";
    
    printf("Enter a string: \n");
    gets(str);
    printf("Enter another string: \n");
    gets(str2);
    
    for (i1 = 0; str[i1] != '\0'; i1++)
      if (str[i1] == '\0') break;
      
    for (i2 = 0; str2[i2] != '\0'; i2++)
      if (str2[i2] == '\0') break;
      
    if (i1 == i2) {
      int is_equal = 1; // true
      for (int j = 0; j < i1; j++)
        if (str[j] != str2[j]) {
          is_equal = 0; // false
          break;
        }
      if (is_equal)
        printf("Both the strings are equal");
      else
        printf("The strings have equal lengths only", i1, i2);
    } else {
      printf("The strings are unequal in length and content");
    }
}