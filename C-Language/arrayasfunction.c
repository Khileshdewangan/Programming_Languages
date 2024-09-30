#include <stdio.h>
int fun1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the %d value is :%d\n", i, array[i]);
    }
    // array[0] = 258;
    // very important point that if you changeany value here, it get reflect in main()
    return 0;
}

int fun2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("the %d value is :%d\n", i, ptr[i]);
        printf("the %d value is :%d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 5555;
}

int fun3(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the %d %d value is :%d\n", i, j, array[i][j]);
        }
    }
}
int main()
{
    int arr[2][2] = {{12, 15}, {42, 48}};
    // printf("the value 0 is %d\n", arr[0]);
    // fun1(arr);
    // printf("the value 0 is %d\n", arr[0]);
    // fun2(arr);
    // fun2(arr);
    fun3(arr);
    return 0;
}