// with argument and with retern value

#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 9, b = 24, c;
    c = sum(a, b);
    printf("%d", c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}

// void out();
// int main()
// {
//   printf("enter the number you what a table\n");
//   out();
// }
// void out()
// {
//      printf("enter the number you what a table\n");
// }
