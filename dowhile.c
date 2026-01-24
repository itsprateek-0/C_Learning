#include <stdio.h>

int main()
{
    int giv, write = 1;
    printf("enter a number\n");
    scanf("%d",&giv);

    do
    {
        printf("%d \n", write);
        write = write + 1;
    } while (write <= giv);
    
    return 0;
}