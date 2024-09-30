#include <stdio.h>
int main()
{
    int arr[] = {311, 52, 3, 5, 4, 6, 7};
    int *ptr = arr;
    printf("the vailue of first element of the array is = %d\n\n", arr[0]);

    printf("the adderss of first element of the array is = %d\n", &arr[0]);
    printf("the adderss of first element of the array is = %d\n\n", arr);

    printf("the adderss of second element of the array is = %d\n", &arr[1]);
    printf("the adderss of second element of the array is = %d\n\n", arr + 1);

    printf("the adderss of third element of the array is = %d\n", &arr[2]);
    printf("the adderss of third element of the array is = %d\n\n", arr + 2);
    ptr++; //arr++ is not valid

    printf("the value at adderss of first element of the array is = %d\n", *(&arr[0]));
    printf("the value at adderss of first element of the array is = %d\n", *(arr));
    printf("the value at adderss of first element of the array is = %d\n\n", arr[0]);

    printf("the value at adderss of second element of the array is = %d\n", *(&arr[1]));
    printf("the value at adderss of second element of the array is = %d\n", *(arr + 1));
    return 0;
}
