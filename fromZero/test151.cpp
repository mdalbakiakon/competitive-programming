#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string str;
    cin >> str;

    int count = 0;   
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(str[i] == 'x') count++;
        else count = 0;

        if(count >= 3) ans++;
    }

    cout << ans << "\n";
}