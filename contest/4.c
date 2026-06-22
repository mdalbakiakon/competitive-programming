#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int a[n+1];
    int called[n+1];

    for(int i=0; i<=n; i++){
        called[i] = 0;
    }

    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }

    for(int i=1; i<=n; i++){
        if (called[i] == 0){
            called[a[i]] = 1;
        }
    }

    int count = 0;
    for(int i=1; i<=n; i++){
        if (called[i] == 0){
            count += 1;
        }
    }

    printf("%d\n", count);

    int first = 1;
    for(int i=1; i<=n; i++){
        if (called[i] == 0){
            if (first == 1){
                printf("%d", i);
                first = 0;
            } else {
                printf(" %d", i);
            }
        }
    }
    printf("\n");

    return 0;
}