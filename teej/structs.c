#include <stdio.h>

struct students // defining a struct
{
    char name[32]; // may use const char* name if want flexibility with size , since then this will be replaced by a pointer pointing to a string literal in the memory
    int age;
};
struct coordinate
{
    int x;
    int y;
    int z;
}a,b,c;

struct coordinate new_coord(int x_value, int y_value, int z_value)
{
    struct coordinate c =
        {
            .x = x_value,
            .y = y_value,
            .z = z_value,
        };
    return c;
}

int main()
{
   
    printf("\n%d,%d,%d", new_coord(12, 11, 10));

    // struct students s1 = {
    //     .name = "popatlaal",
    //     .age = 12};

    // printf("Name is %s and age is %d", s1.name, s1.age);
    return 0;
}