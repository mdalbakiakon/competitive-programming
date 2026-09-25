#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        if(a > b){
            cout << "First\n";
        } else if(a < b){
            cout << "Second\n";
        } else {
            cout << ((c % 2 == 1) ? "First\n" : "Second\n");
        }
    }
}