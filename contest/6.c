#include <stdio.h>
#define MAX 1000001

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    long long counter[MAX] = {0};

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        counter[arr[i]]++;
    }

    long long suffix[MAX] = {0};
    for(int x = MAX-2; x >= 0; x--){
        suffix[x] = suffix[x+1] + counter[x+1] * (x+1);
    }

    for(int i = 0; i < n; i++){
        if(i > 0) printf(" ");
        printf("%lld", suffix[arr[i]]);
    }
    printf("\n");

    return 0;
}