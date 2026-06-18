// full piramid

#include<stdio.h>

int main(){
    int row;
    scanf("%d", &row);
    int space = row-1;

    for(int i=0; i<row; i++){

        for(int j=0; j<space; j++){
            printf(" ");
        }

        int odd = (2*i)+1;

        while (odd--)
        {
            printf("*");
        }

        printf("\n");
        space -= 1;
    }


    printf("\n\n\n");

    int odd_max = row;

    for(int i=0; i<row; i++){

        for(int j=0; j<i; j++){
            printf(" ");
        }

        
        int odd = (2*odd_max) - 1;
        while(odd--){
            printf("*");
        }

        printf("\n");
        odd_max-=1;
    }

    return 0;
}