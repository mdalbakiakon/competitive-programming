#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];

        sort(h.begin(), h.end());

        vector<long long> left, middle, right;
        int k = 0;

        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && h[j] == h[i]) j++;
            int cnt = j - i;

            left.push_back(h[i]);
            k += min(cnt, 2);

            if (cnt >= 2) right.push_back(h[i]);
            for (int x = 0; x < cnt - 2; x++) middle.push_back(h[i]);

            i = j;
        }

        reverse(right.begin(), right.end());

        cout << k << "\n";
        for (long long x : left) cout << x << " ";
        for (long long x : middle) cout << x << " ";
        for (long long x : right) cout << x << " ";
        cout << "\n";
    }

    return 0;
}