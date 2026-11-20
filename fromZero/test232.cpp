#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;

        int ans = 0;
        int i = 0;
        while (i < n) {
            if (s[i] == 'B') {
                ans++;
                i += k;
            } else {
                i++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}