/* Goal is to print triangular pattern of star, forward and reverse
forward pattern:
*
**
***
****
*****
reverse pattern:
*****
****
***
**
*
*/
#include <stdio.h>
void fstar();
void frev();
int main()
{
    char x;
    do
    {
    printf("To print the star triangular pattern in forward, press F , for reverse press R, press Q to quit\n");
    scanf(" %c",&x);
    switch (x)
    {
    case 'f':
        fstar();
        break;
    case 'r':
        frev();
        break;
    case 'q':
        printf("Bye!\n");
        break;
    }     
    }while (x !='q');
    
    return 0;
}
 void fstar()
{
    for (int i = 1; i <= 10; i++)
    {   for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");        
}
void frev(){
    for (int i = 10; i >= 1; i--)
    {   for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
    printf("\n");
        }
printf("\n");
}