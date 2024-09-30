#include <stdio.h>
//********************print 1 to 100 prime number***********************
// int main()
// {
//     int a, i, c;

//     for (int i = 1; i <= 100; i++)
//     {
//         a = 0;
//         for (int j = 2; j <= i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 a++;
//                 break;
//             }
//         }
//         if (a == 0 && i != 1)
//             printf("%d\n", i);
//     }

//     return 0;
// }


int main()
{
    int n, i, flag = 0;

    printf("enter the number ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
            // printf("1 is not a prime number \n");
        }
    }
    if (n == 1)
    {
        printf("1 is not a prime number or not a composite number\n ");
    }

    else
    {
        if (flag == 1)
        {
            printf("%d not prime number\n  ", n);
        }
        else
        {
            printf("%d is prime number\n  ", n);
        }
    }

    return 0;
}


