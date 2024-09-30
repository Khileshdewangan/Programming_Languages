// with argument and without retern value
#include <stdio.h>
#include<math.h>
int sum(int x, int y)
{
    return x+y;
}
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", '*');
    }
}
int main()
{
    int a = 9, b = 24, c;
    c = sum(a, b);
    printf("%d\n", c);
    // printstar(7);
    return 0;
}