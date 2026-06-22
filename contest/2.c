#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int count[n+1] = {0};

    int arr[n];
    for(int i=0; i<n-1; i++){
        scanf("%d", &arr[i]);
        count[arr[i]] = 1;
    }

    for(int v=1; v<n+1; v++){
        if(count[v] == 0){
            printf("%d\n", v);
        }
    }
    return 0;
}