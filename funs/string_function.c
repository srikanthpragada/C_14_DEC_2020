#include <stdio.h>

void common_chars(char s1[30], char s2[30])
{
 int i,j;

    for(i=0; s1[i] != '\0'; i++)
    {
        // check whether char s1[i] is present in s2
        for(j=0; s2[j] != '\0'; j++)
        {
            if (s2[j] == s1[i])
            {
                putch(s1[i]);
                break;
            }
        }
    }
}

void main()
{
   common_chars("ABCDB","DEBF");
}
