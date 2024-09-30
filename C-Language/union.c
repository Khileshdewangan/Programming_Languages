#include <stdio.h>
#include <string.h>
union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    union student s1, s2;
    strcpy(s1.name, "khilesh");
    s1.fav_char = 'h';
    s1.marks = 45;
    s1.id = 1;


    printf("the id is %d\n", s1.id);
    printf("the marks is %d\n", s1.marks);
    printf("the fav_char is  %c\n", s1.fav_char);
    printf("the change name is %s\n", s1.name);
    return 0;
}