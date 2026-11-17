#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[105];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // Start with the first stone as both min and max
        int minPos = 1, maxPos = 1;
        for (int i = 2; i <= n; i++) {
            if (a[i] < a[minPos]) minPos = i;
            if (a[i] > a[maxPos]) maxPos = i;
        }

        int l = min(minPos, maxPos);
        int r = max(minPos, maxPos);

        int fromLeft = r;
        int fromRight = n - l + 1;
        int fromBoth = l + (n - r + 1);

        cout << min(fromLeft, min(fromRight, fromBoth)) << "\n";
    }
    return 0;
}