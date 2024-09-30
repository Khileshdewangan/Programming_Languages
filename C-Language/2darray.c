#include <stdio.h>
int main()
{

    int roll[2][5] = {{2, 4, 6, 8, 12}, {10, 14, 12, 16, 24}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            //    printf("the value of i %d and j %d   =  %d\n",i, j, roll[i][j]);
            printf(" %d   ", roll[i][j]);
        }

        printf("\n\n");
    }

    return 0;
}