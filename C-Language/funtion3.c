// without argument and with retern value
#include <stdio.h>
int newnuber()
{
    int i;
    printf("please enter a number");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a, b, c;
    c = newnuber();
    printf("you enter number is %d", c);
    return 0;
}