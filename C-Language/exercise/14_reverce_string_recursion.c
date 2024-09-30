#include <stdio.h>
void revercstring()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        revercstring();
        printf("%c", c);
    }
}
int main()
{
    printf("enter a sentence:   ");
    revercstring ();
    return 0;
}