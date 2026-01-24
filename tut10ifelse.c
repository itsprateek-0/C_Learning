#include <stdio.h>

int main()
{
    int a; 
    printf("Choose the subjects you passed in to find out your prize \n Press 1 for maths and science \n Press 2 for only science \n Press 3 for only maths \n ");

    scanf("%d", &a);
    if (a == 1)
    {
        printf("Congratulations you have won 45 rupees prize");
    }
    else if (a == 2)
    {
        printf("Congratulations you have won 15 rupees prize");
    }
    else if (a == 3)
    {
        printf("Congratulations you have won 15 rupees prize");
    }
    return 0;

}
