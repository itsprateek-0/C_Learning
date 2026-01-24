#include<stdio.h>

int main(){
    int x = printf("Hello"); //printf function is called and it prints the output, while the return value of printf(being an int) returns the no. of characters it 'outputted'
    printf(" %d\n", x); //int x was assigned the return value of 5, so a 5 will be returned

    int a = 5;
    int b = a++ ; //b is assigned a and then a increases by 1, the ++ after the variable is called postfix operator, ++a would be called a prefix operator, in that case, b would be assigned the increased value of a that is 6 here
    printf("%d",b);
    return 0;

}