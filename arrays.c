#include <stdio.h>

int main()
{
    int marks[2][3]; // sq bracket here represent the total number of elements in array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value of %d,%d element of the array\n", i, j);
            scanf("%d", &marks[i][j]); // sq bracket here represent the value of index, variable are also allowed for flexibly manipulating the indice
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("The values of %d,%d elements are %d\n", i, j, marks[i][j]);
        }
    }
    return 0;
}