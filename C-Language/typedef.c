#include <stdio.h>
typedef struct student
{
    int id;
    int marsk;
    char fav_char;
    char name[34];
} std;

int main()
{
    // int *a, b;
    typedef int *intpointer;
    intpointer a, b;
    int c;
    a = &c;
    b = &c;

    // std s1, s2;
    // s1.id=25;
    // s2.id=36;
    // printf("%d\n", s1.id);
    // printf("%d", s2.id);

    // typedef <previous_name> <alias_name>;   //syntex of typedef
    // typedef unsigned long ul;
    // typedef int i;
    // ul l1, l2, l3;
    // i ab = 8;
    // printf("%d", ab);
    return 0;
}
