#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int dots = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') dots++;
        }

        bool hasTriple = (s.find("...") != string::npos);

        if (hasTriple) {
            cout << 2 << "\n";
        } else {
            cout << dots << "\n";
        }
    }

    return 0;
}