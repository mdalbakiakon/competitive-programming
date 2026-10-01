#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int first;
        cin >> first;
        int lo = first, hi = first;
        bool ok = true;

        for (int i = 1; i < n; i++) {
            int num;
            cin >> num;              // always read, even after failure
            if (!ok) continue;

            if (num == lo - 1) lo = num;
            else if (num == hi + 1) hi = num;
            else ok = false;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}