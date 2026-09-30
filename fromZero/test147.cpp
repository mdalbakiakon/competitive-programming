#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<long long>> dp(n, vector<long long>(n, 1));

    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }

    cout << dp[n-1][n-1] << "\n";
}