#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a=23;
    int *ptra = &a;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", ptra);
    printf("The address of a is %p\n", &a);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    
    int *ptrnull = NULL; //called a null pointer, a pointer variable initialized that can be later assigned a memory address , assigned NULL to avoid returning garbage value 
    int *ptr2;
    printf("The address of some garbage is %p\n", ptr2);
    printf("The address stored in some uninitialised pointer is %p\n", ptrnull);
    return 0;
    
}