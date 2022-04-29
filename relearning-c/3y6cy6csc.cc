#include <stdio.h>

int main()
{
    char str[300]; int digit = 0, vowel = 0, consonant = 0, space = 0;
    printf("Enter a string: \n");
    gets(str);
    
    for (int i = 0; i < strlen(str); i++)
      if (str[i] >= 48 && str[i] <= 57)
        digit++;
      else if (str[i] >= 65 && str[i] <= 90)
        switch (str[i]) {
          case 'A': case 'E': case 'I': case 'O': case 'U':
            vowel++; break;
          default:
            consonant++;
        }
      else if (str[i] >= 97 && str[i] <= 122)
        switch (str[i]) {
          case 'a': case 'e': case 'i': case 'o': case 'u':
            vowel++; break;
          default:
            consonant++;
        }
      else if (str[i] == ' ')
        space++;
        
    printf(
      "Digits: %d, Vowels: %d, Consonants: %d, Words: %d",
      digit, vowel, consonant, space+1
    );
}