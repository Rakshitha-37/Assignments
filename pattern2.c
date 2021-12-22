/* Program to print given pattern
ABCDE
 BCDE
  CDE
   DE
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
            ch++;
        }
        printf("\n");
        ch = 'A';
    }

    return 0;
}
