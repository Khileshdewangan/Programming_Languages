#include <stdio.h>
int main()
{
    char op;
    int first, second, temp;

    // printf("Enter oprator(+,  -,  *,  /) \n");
    // scanf("%c", &op);

    // printf("Enter first Number\n");
    // scanf("%d", &first);

    // printf("Enter Second Number\n");
    // scanf("%d", &second);
    // switch (op)
    // {
    // case '+':
    //     printf("%d + %d = %d\n", first, second, first + second);
    //     break;
    // case '-':
    //     printf("%d - %d = %d\n", first, second, first - second);
    //     break;
    // case '*':
    //     printf("%d * %d = %d\n", first, second, first * second);
    //     break;
    // case '/':
    //     printf("%d / %d = %d\n", first, second, first / second);
    //     break;
    // default:
    //     break;
    // }

    while (1)
    {

        printf("Enter First/second Number\n");
        scanf("%d    %c   %d", &first, &op, &second);

        switch (op)
        {
        case '+':
            printf("%d + %d = %d\n", first, second, first + second);
            break;
        case '-':
            printf("%d - %d = %d\n", first, second, first - second);
            break;
        case '*':
            printf("%d * %d = %d\n", first, second, first * second);
            break;
        case '/':
            printf("%d / %d = %d\n", first, second, first / second);
            break;
        default:
            break;
        }
    }

    return 0;
}