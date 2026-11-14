#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // If k >= 2, adjacent swaps are possible, so always sortable
        if (k >= 2) {
            cout << "YES\n";
            continue;
        }

        // k == 1: nothing can change, so check if already sorted
        bool sorted = true;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                sorted = false;
                break;
            }
        }

        if (sorted) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}