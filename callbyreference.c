/* call by value is the typical way of calling a function, the value of global variables(or just values without using variables) are copied to the formal parameters of the local variable(of the the function), the return value is given back without every distoring the original value in the global variable */

/*call by reference implies passing the address of variables to formal parameters(gotta be pointer type) to a function, the function can then dereference the address and change the value of original variable*/

#include <stdio.h>
void swap(int *x, int *y); //formal parameters are pointers here

int main()
{
    int a =12, b= 15;
    printf("The value of a and b is %d, %d\n", a, b);
    swap(&a,&b);
    printf("The value of a and b is %d, %d\n", a, b);   
    return 0;
}
void swap(int *x, int *y) //formal parameters are pointers here
{
    int temp; //a third variable to handle exchange of values
    temp = *x;
    *x = *y;
    *y = temp;
    
}
