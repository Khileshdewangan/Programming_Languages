#include <stdio.h>
#include <stdlib.h>

// use of malloc:    its initilaize a garbeg value

// int main()
// {
//     int *ptr;
//     int n;
//     printf("enter the size of array you want to create ", n);
//     scanf("%d", &n);

//     ptr = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the value no. %d of this array\n", i);
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("The value at %d of this array %d\n", i, ptr[i]);
//     }

//     return 0;
// }






// int main()
// {
//     int *ptr;
//     int n;
//     int sum=0;
//     printf("enter the size of array you want to create ", n);
//     scanf("%d", &n);

//     ptr = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the value no. %d of this array\n", i);
//         scanf("%d", &ptr[i]);
//         sum=sum+ptr[i];
//     }

   
//        printf("%d", sum);

//     return 0;
// }



int main()
{
    int num, *arr, i;
    
    scanf("%d", &num);
    
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }


    /* Write the logic to reverse the array. */

    for(i = num-1; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}