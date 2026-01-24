#include<stdio.h>
int main()
{
    printf("Hello World\n");
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d Enter your age\n", i);
        scanf("%d", &age);
       /*  if(age>10)
        {
            break;
        } */
        if(age>10)
        {
            continue;
        }
       /*  printf("not to be printed\n");
        printf("not to be printed\n");
        printf("not to be printed\n");
        printf("not to be printed\n");
        printf("Keny is a bad girl\n");
    } */
    return 0;
}