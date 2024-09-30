// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[] = "khilesh";
//     char s2[] = "dewangan";
//     strcat(s1, s2);
//     printf("%s", s1);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[]="Language";
    char sen[]="Welcome To C!!";
    
    scanf("%c", &ch);
    printf("%c\n", ch);
    
    scanf("%[^\n]%*c", &s);
    printf("%s\n", s);
    
    scanf("%[^\n]%*c", &sen);
    printf("%s\n", sen);
    // printf(" Welcome To C!!\n");
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}