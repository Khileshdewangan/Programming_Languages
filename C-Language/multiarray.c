#include <stdio.h>
int main()
{

    int roll[2][5][3] = {2, 5, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 25, 26, 23, 21, 27, 28, 29, 33, 332, 65, 48, 75, 62, 15, 34, 95, 50, 60};
    // {2, 4, 6, 8, 12}, {10, 14, 12, 16, 24}
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int p = 0; p < 3; p++)
            {
                printf(" %d   ", roll[i][j][p]);
            }
            printf("\n\n");
            //    printf("the value of i %d and j %d   =  %d\n",i, j, roll[i][j]);
        }

        printf("\n\n");
    }

    return 0;
}