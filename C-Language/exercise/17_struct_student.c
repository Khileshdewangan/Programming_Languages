#include <stdio.h>
int main()
{
    struct student
    {
        int roll;
        char name[50];
        float marks;
    } s1[5];

    printf("Enter Student Information ");

    for (int i = 0; i < 3; i++)
    {
        printf("\nFor roll number %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", &s1[i].name);

        printf("Enter marks: ");
        scanf("%f", &s1[i].marks);
    }

    printf("\ndisplay information\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nroll number %d\n", i + 1);
        printf("Name: %s\n", s1[i].name);
        printf("Marks: %.2f\n", s1[i].marks);
    }
    return 0;
}