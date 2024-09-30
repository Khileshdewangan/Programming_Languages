#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marsk;
    char fav_char;
    char name[34];
} ravi, rahul, khilesh;

// struct student ravi, rahul, khilesh;       //global variable
int main()
{
    ravi.id = 1;
    rahul.id = 2;
    khilesh.id = 3;
    ravi.marsk = 25;
    rahul.marsk = 35;
    khilesh.marsk = 45;
    ravi.fav_char = 'p';
    rahul.fav_char = 'u';
    khilesh.fav_char = 'g';

    // {
    //     struct student ravi, rahul, khilesh; // local variable
    //     ravi.id = 1;
    //     rahul.id = 2;
    //     khilesh.id = 3;
    //     ravi.marsk = 25;
    //     rahul.marsk = 35;
    //     khilesh.marsk = 45;
    //     ravi.fav_char = 'p';
    //     rahul.fav_char = 'u';
    //     khilesh.fav_char = 'g';
    // };
    strcpy(khilesh.name, "you want to do the name");
    printf("ravi id is %d\n\n", ravi.id);
    printf("rahul id is %d\n\n", rahul.id);
    printf("khilesh id is %d\n\n", khilesh.id);
    printf("ravi marsk is %d\n\n", ravi.marsk);
    printf("rahul marsk is %d\n\n", rahul.marsk);
    printf("khilesh marsk is %d\n\n", khilesh.marsk);
    printf("ravi fav_char is %c\n\n", ravi.fav_char);
    printf("rahul fav_char is %c\n\n", rahul.fav_char);
    printf("khilesh fav_char is %c\n\n", khilesh.fav_char);

    // printf("khilesh is now    %s\n", rahul.name);    // gives a garbeg value
    printf("khilesh is now    %s\n", khilesh.name);

    return 0;
}