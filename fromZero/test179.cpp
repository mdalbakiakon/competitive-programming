#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int best = 0, ans = 1;
for(int y = 1; y < x; y++){
    int v = gcd(x, y) + y;
    if(v > best){ best = v; ans = y; }
}
cout << ans << "\n";
    }
}