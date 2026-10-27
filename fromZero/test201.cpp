#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1), pos(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }

        int p = n - k + 1;

        vector<bool> seen(n + 2, false);
        int mx = -1, mxIdx = -1;
        for (int i = 1; i <= p; i++) {
            seen[a[i]] = true;
            if (a[i] > mx) {
                mx = a[i];
                mxIdx = i;
            }
        }
        int m = 0;
        while (seen[m]) m++;

        if (m == p) {
            cout << -1 << "\n";
        } else {
            cout << mxIdx << " " << pos[m] << "\n";
        }
    }
    return 0;
}