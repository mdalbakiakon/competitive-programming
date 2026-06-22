#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        
        int sum = 0;

        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        
        double res = (double)sqrt(sum);
        long long int_part = (long long)res;
        double check_fraq = res - int_part;

        if(check_fraq == 0.0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}