#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[94] = "the content of this file has";

    //*************** Reading a file *********************
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%S" , string);
    // printf("the content of this file has  %s\n", string);

    //*************** wrighting a file *********************

    ptr = fopen("myfile.txt", "w");
    fprintf(ptr, "%S", string);

    return 0;
}