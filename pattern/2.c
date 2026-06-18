    //     *
    //    **
    //   ***

#include<stdio.h>

int main(){

    int row;
    int count_space;
    scanf("%d", &row);
    count_space = row - 1;

    for(int i=0; i<row; i++){
        for (int k = 0; k <= count_space; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("*");   
        }
        printf("\n");
        count_space -= 1;
    }

    return 0;
}