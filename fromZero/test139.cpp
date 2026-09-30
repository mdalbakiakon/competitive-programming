#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string n;
        cin >> n;
        int size = n.size() - 1;   // digits minus 1
        int d = n[0] - '0';        // first digit
        cout << 9 * size + d << "\n";
    }
}