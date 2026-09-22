#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> q(n);

        int ones = 0;

        for (int i = 0; i < n; i++) {
            cin >> q[i];

            if (q[i] == 1) {
                ones++;
            }
        }

        if (ones >= (n + 1) / 2) {
            cout << "Bessie\n";
        } else {
            cout << "Elsie\n";
        }
    }

    return 0;
}