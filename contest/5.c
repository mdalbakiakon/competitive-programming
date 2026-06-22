#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n,k;
        scnaf("%d %d", &n, &k);

        int arr[n];
        int counter[101] = {0};
        int max = 0;

        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            counter[arr[i]] += 1;
            if(counter[arr[i]] > max){
                max = counter[arr[i]];
            }
        }

        if (counter[k] == max){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}