#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int start = 4;

    while(start<n){
        int need = n - start;
        if(!isPrime(need) && !isPrime(start)){
            cout << start << " " << need << "\n";
            break;
        }
        start++;
    }
}