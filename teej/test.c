#include <stdio.h>

void countdown(int n)
{
    if (n <= 0)
    {
        return;
    }

    printf("%d\n", n);
    countdown(n - 1);
}
int main()
{
    int x;
    printf("countdown from?");
    scanf("%d", &x);
    countdown(x);

    return 0;
}