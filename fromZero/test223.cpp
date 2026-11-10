#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    long long n = min(a, b);

    long long ans = 1;
    for (long long i = 1; i <= n; i++) {
        ans = ans * i;
    }

    cout << ans << "\n";
    return 0;
}