#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> need = {
        {0, 3},
        {1, 1},
        {2, 2},
        {3, 1},
        {5, 1}
    };

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (int &v : vec) cin >> v;

        map<int, int> have;   
        int res = 0;          

        for (int i = 0; i < n; i++) {
            have[vec[i]]++;   

            bool ok = true;
            for (auto &p : need) {
                if (have[p.first] < p.second) {
                    ok = false;
                    break;
                }
            }

            if (ok) {
                res = i + 1;
                break;
            }
        }

        cout << res << "\n";
    }

    return 0;
}