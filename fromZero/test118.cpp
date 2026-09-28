#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int sum = 0;
        bool hasOdd = false, hasEven = false;
        while(n--){
            int num;
            cin >> num;
            sum += num;
            if(num % 2 == 0) hasEven = true;
            else hasOdd = true;
        }

        bool ok = (sum % 2 != 0) || (hasOdd && hasEven);
        cout << (ok ? "YES\n" : "NO\n");
    }
}