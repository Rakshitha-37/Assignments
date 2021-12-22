/* Program to print given pattern
AAAAA
 BBBB
  CCC
   DD
    E */

#include <stdio.h>

int main()
{
    char ch = 'A';
    for(int i = 0;i<5;i++)
    {
        for(int j = 0; j<5;j++)
        {
            if(j >= i)
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        ch++;
    }

    return 0;
}
