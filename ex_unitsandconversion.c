#include <stdio.h>

int main()
{
    char choice;
    do
    {
        printf("what do you want to convert \n choose 1 for kms to miles\n choose 2 for inches to foot\n choose 3 for cms to inches\n choose 4 for pound to kgs \n choose 5 for inches to metres\n press q to quit\n");
        scanf(" %c", &choice);

        switch (choice)
        {
        case '1':
            float a;
            printf("enter number for conversion\n");
            scanf("%f", &a);
            printf("%f\n", a / 1.609f);
            break;

        case '2':
            float b;
            printf("enter number for conversion\n");
            scanf("%f", &b);
            printf("%f\n", b / 12.0f);
            break;

        case '3':
            float c;
            printf("enter number for conversion\n");
            scanf("%f", &c);
            printf("%f\n", c / 2.54f);
            break;

        case '4':
            float d;
            printf("enter number for conversion\n");
            scanf("%f", &d);
            printf("%f\n", d / 2.205f);
            break;

        case '5':
            float e;
            printf("enter number for conversion\n");
            scanf("%f", &e);
            printf("%f\n", e * 0.0254f);
            break;

        case 'q':
            printf("Bye!");
            break;
        }
    } while (choice != 'q');
    return 0;
}