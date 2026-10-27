#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string x, y;
        cin >> x >> y;

        int single = 0;
        for (int i = 0; i < n; i++) {
            if (x[i] != y[i]) single++;
        }

        cout << single % 2 << "\n";
    }
    return 0;
}