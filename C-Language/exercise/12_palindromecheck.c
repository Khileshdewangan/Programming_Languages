#include <stdio.h>
#include <string.h>
int main()
{
    char string[30];
    int length, flag = 0;
    printf("enter a string   ");
    scanf("%s", string);

    length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        if (string[i] != string[length - i - 1])
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0)
    {
        printf("%s is a palindrome", string);
    }
    else
    {
        printf("%s is not a palindrome", string);
    }

    return 0;
}