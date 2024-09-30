#include <stdio.h>
int main(){
    int num;
    printf("enter the number");
    scanf("%d", &num);
     
    int size = 2 * num - 1;
    int end = size - 1;
    int start = 0;
    int a[size][size];

    while (num != 0){
        for (int i=start; i <=end; i++){
            for (int j = start; j <= end; j++){
                if (i==start || i==end || j==start || j==end){
                    a[i][j] = num;
                }
            }
        }
            ++start;
            --end;
            --num;
    }

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            printf("%d ", a[i][j]);
            }
            printf("\n");
    }

    return 0;
}

