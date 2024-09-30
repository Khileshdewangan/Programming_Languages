#include <stdio.h>
int main()
{
    int first_num, second_num, temp;

    printf("Enter First Number\n");
    scanf("%d", &first_num);

    printf("Enter Second Number\n");
    scanf("%d", &second_num);

    temp = first_num;
    first_num = second_num;
    second_num = temp;
    

    printf("after swaping\n");
    printf("First Number is: %d\n", first_num);
    printf("Second Number is: %d", second_num);

    return 0;
}