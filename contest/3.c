#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int high[n];
    for(int i=0; i<n; i++){
        scanf("%d", &high[i]);
    }

    int best = high[0];

    for(int i=0; i<n-1; i++){
        if(high[i+1]>high[i]){
            best=high[i+1];
        }
        else{
            break;
        }
    }

    printf("%d\n", best);

    return 0;
}