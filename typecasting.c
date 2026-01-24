#include <stdio.h>
int main()
{
    // int a = 3;
    // float b = 45;
    // float c = 4;
    char y[5]={'a','b','c','d','e'};
    float d = (float)54/4;
    printf("The value of x is %2.3f",d);
    printf("%c",y[4]);
    //8 is width space, essentially adding padding space = width - digits
    //3 is precision digits. forces rounding off if less digits than possible
    return 0;
}