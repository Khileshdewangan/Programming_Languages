#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fp;
    fp = fopen("myfile.txt", "w");
    fputs("hello world khilesh i love you", fp);
    fclose(fp);
    char text[300];
    fp = fopen("myfile.txt", "r");
    printf("data form the file : %s", fgets(text, 200, fp));

    fclose(fp);
    return 0;
}