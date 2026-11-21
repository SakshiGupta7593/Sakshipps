#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f, ch;

    printf("Enter 1st no: ");
    scanf("%d", &a);

    printf("Enter 2nd no: ");
    scanf("%d", &b);

    while(1)
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                c = a + b;
                printf("\nAddition = %d\n", c);
                break;

            case 2:
                d = a - b;
                printf("\nSubtraction = %d\n", d);
                break;

            case 3:
                e = a * b;
                printf("\nMultiplication = %d\n", e);
                break;

            case 4:
                if(b != 0)
                {
                    f = a / b;
                    printf("\nDivision = %d\n", f);
                }
                else
                {
                    printf("\nDivision by zero is not possible!\n");
                }
                break;

            case 5:
                printf("\nThank you!\n");
                exit(0);

            default:
                printf("\nInvalid choice!\n");
        }
    }

    return 0;
}
