#include <stdio.h>
int main()
{
    // label:
    //     printf("we are inside the label\n");
    //     goto end;
    //     printf("hellow world\n");
    //     goto label;
    //     end:
    //     printf("hellow khilesh\n");
    //     return 0;
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; i++)
        {
            printf("enter the number enter o to exit");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
                // break;
            }
        }
    }
end:
    return 0;
}
