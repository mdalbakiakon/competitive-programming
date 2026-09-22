#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    int count = 0;

    while (n != 0) {
        int remainder = n % 10;
        if (remainder == 4 || remainder == 7) {
            count += 1;
        }
        n /= 10;
    }

    if(count == 4 || count == 7){
    	cout << "YES" << endl;
    }else{
    	cout << "NO" << endl;
    }
    return 0;
}   