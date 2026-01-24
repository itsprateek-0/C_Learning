//4 types of functions
//function with arguments and return value, 
//function with arguments without return value
//function without arguments and with return value
//function without arguments and without return vale

#include <stdio.h>
int sum (int a, int b);
//wrt (int a, int b) arguments are values of a and b supplied at the call site c=sum(a,b), parameters (a,b) are placeholders for them, arguments


void printstar (int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');}//single quotes for char, double quotes for string
        }
//this is a function with argument but without return value, void functions may or may not use parameters/arguments

void dumbprint(){
    printf ("This function has no arguments nor return value");
}

int takenumber(){
    int t;
    printf("Enter a number");
    scanf("%d", &t);
    return t ;
}
//this is a function without argument but with return value


int main(void) //void in parameters specifies explicitly that there are no parameters otherwise it might consider it unspecified, tho with modern c compilers, not writing anything kinda works
{
    int a, b, c;
    a = 9;
    b = 5;
    //c = sum(a,b);
    //printf("The value of c is %d \n", c);
    //printstar(7);
    c = takenumber();
    printf("The number entered is %d \n",c);
    dumbprint();
    return 0;
}
// function may be defined later or with decleration (but always at file/global scope, not inside functions like main) but decleration is compulsory before calling, declaration may be block scope or file

int sum (int a, int b){
    return a + b;
// this is a function with arguments and return value
}