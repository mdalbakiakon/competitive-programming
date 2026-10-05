#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e6 + 10;      // use the actual max n from the problem

long long fact[N];           // global → static memory, not stack

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
        fact[i] = fact[i - 1] * i % M;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << fact[n] << "\n";
    }
}