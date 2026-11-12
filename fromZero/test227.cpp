#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool need[27] = {false};
        for (int i = 0; i < n / 2; i++) {
            int a = s[i] - 'a';
            int b = s[n - 1 - i] - 'a';
            if (a > b) swap(a, b);
            for (int k = a + 1; k <= b; k++) need[k] = true;
        }

        int ans = 0;
        for (int k = 1; k < 26; k++) ans += need[k];
        cout << ans << "\n";
    }
    return 0;
}