#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long mx = 0;
        for (int i = 0; i < k; i++) {
            long long x;
            cin >> x;
            mx = max(mx, x);
        }

        cout << 2 * (n - mx) - (k - 1) << "\n";
    }
}