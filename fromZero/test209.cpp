#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string p, q;
        cin >> n >> m >> p >> q;

        int cnt[26] = {0};

        for (char c : p) cnt[c - 'a']++;
        for (char c : q) cnt[c - 'a']--;

        bool ok = true;
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            if (c == 's' || c == 'i' || c == 'x') {
                if (cnt[i] != 1) ok = false;
            } else {
                if (cnt[i] != 0) ok = false;
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }
    return 0;
}