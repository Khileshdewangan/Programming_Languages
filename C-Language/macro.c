#include <stdio.h>
int main()
{
    printf("the file name is    :  %s\n", __FILE__);
    printf("now time is         :  %s\n", __TIME__);
    printf("today date          :  %s\n", __DATE__);
    printf("line no. is         :  %d\n", __LINE__);
    printf("ANSI is             :  %d\n", __STDC__);

    return 0;
}