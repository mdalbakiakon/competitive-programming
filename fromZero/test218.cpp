
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Sieve of Eratosthenes
    vector<bool> isPrime(MAXN, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < MAXN; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Find the next prime strictly greater than each number
    vector<int> nxt(MAXN);

    int last = -1;
    for (int i = MAXN - 1; i >= 0; i--) {
        nxt[i] = last;
        if (isPrime[i]) {
            last = i;
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            cout << nxt[a] << (i == n - 1 ? '\n' : ' ');
        }
    }

    return 0;
}
