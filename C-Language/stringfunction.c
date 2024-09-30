#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "khilesh";
    char s2[] = "dewangan";
    char s3[45];
    // puts(strcat(s1, s2));
    printf("the lenth of s1 is %d\n", strlen(s1));
    printf("the lenth of s1 is %d\n", strlen(s2));
    printf("the revers of s1 is %d\n");
    puts(strrev(s1));
    puts(strrev(s2));

    strcpy(s3, strcat(s1, s2));
    puts(s3);
    return 0;
}