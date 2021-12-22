/*Program to print given pattern
99999
 7777
  555
   33
    1 */

#include <stdio.h>

int main()
{
    int num = 9;
    for(int i = 0;i<5;i++)
    {
        for(int j = 0; j<5;j++)
        {
            if(j >= i)
            {
                printf("%d", num);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        num = num-2;
    }

    return 0;
}
