#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int mis = 0;
    int chr = 0;
    
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a > b){
            mis++;
        }else if(b > a){
            chr++;
        }
    }

    if(mis == chr){
        cout << "Friendship is magic!^^\n";
    }else if(mis > chr){
        cout << "Mishka\n";
    }else{
        cout << "Chris\n";
    }
}