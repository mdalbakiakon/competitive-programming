#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int total = x + y + z;

        char ch;
        if (y >= z) ch = 'R';
        else if (z >= x) ch = 'S';
        else ch = 'P';

        cout << string(total, ch) << "\n";
    }
    return 0;
}