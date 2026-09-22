#include <bits/stdc++.h>
using namespace std;

int main() {
    // Faster input/output
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;  

        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        int count = 0;
        int runningMin = INT_MAX;  

        for (int i = 0; i < n; i++) {
            if (vec[i] <= runningMin) {
                count++;              
                runningMin = vec[i];
            }
        }

        cout << count << "\n";
    }

    return 0;
}