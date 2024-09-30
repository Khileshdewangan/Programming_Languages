#include <stdio.h>
void prtfun(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // char str[] = {'k', 'h', 'i', 'l', 'e', 's', 'h', '\0'};
    // char str[] = "khilesh";
    char str[40];
    gets(str);
    printf("using custom funtion printstr\n");
    prtfun(str);
    printf("using printf %s\n", str);
     printf("using printf %s\n"); 
    return 0;
}