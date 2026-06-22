#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    long long s[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &s[i]);
    }

    for(int i = 0; i < n; i++){
        if(i == 0)
            printf("%lld", s[0]);
        else
            printf(" %lld", s[i] - s[i-1]);
    }
    printf("\n");

    return 0;
}