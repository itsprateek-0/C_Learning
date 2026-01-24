#include <stdio.h>

int factorial(int num)
{
    if (num < 0)
        return 0; // guard against negative although not required bcoz of the next condition
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
// will be back later for fibonacci series, its taking too much time and effort
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1 || n == 2)
    {
        return n;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
        // 0,1,1,2,3,5,8,13,21,34
    }
}

int fib_iterative(int m)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < m-1; i++)
    {

        b = a + b;
        a = b - a ;
       
    }return a;
}
int main()
{
    // int num;
    // printf("Enter number for factorial\n");
    // scanf("%d", &num);
    // printf("The factorial of %d is %d", num, factorial(num));
    // return 0;
    // int n;
    // printf("How many elements of fibonacci you want?");
    // scanf("%d", &n);
    // printf("fibonacci series is as follows %d ", factorial(n));
    // return 0;
    int m;
    printf("Which fibonacci number in the series you want");
    scanf("%d", &m);
    printf("The value of fibonacci number at position %d is %d", m, fib_iterative(m));
    return 0;
}
