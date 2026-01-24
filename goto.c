#include <stdio.h>
int main()
{
    int num;
    for (int i = 0; i < 9; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 9; j++)
        {
            printf("Enter a number, enter 0 to exit");
            scanf("%d", &num);
            if(num==0){
                goto end; //used to jump out of multiple loops using a single statement, makes readibility of code worse
            }
        }
        
    }
    end:
return 0;
}