#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    string pi = "314159265358979323846264338327";

    while (t--) {
        string n;
        cin >> n;

        int count = 0;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == pi[i]) {
                count++;
            } else {
                break;
            }
        }

        cout << count << "\n";
    }

    return 0;
}