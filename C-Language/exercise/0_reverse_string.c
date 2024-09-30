#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    int lenth;
    printf("enter string  :");
    scanf("%s", &s1);

    strrev(s1);
    printf("reverse string is:  %s", s1);
    // for (int i = 0; i < lenth; i++)
    // {

    //     printf("reverse string is:  %s\n", str[i]);
    // }

    return 0;
}