#include <string.h>
#include <stdio.h>

void reverse(char s[])
{
      int length = strlen(s) ;
      int c, i, j;

      for (i = 0, j = length - 1; i < j; i++, j--)
     {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
      }
}

int main()
{
    int test;
    char str[11], newStr[11];

    scanf("%d", &test);

    while (test--){
        scanf("%s", str);
        strcpy (newStr, str);
        reverse (str);
        //printf ("%s %s", newStr, str);
        if (strcmp(newStr, str) == 0) {
            printf ("YES\n");
        }
        else {
            printf ("NO\n");
        }
    }
    return 0;
}
