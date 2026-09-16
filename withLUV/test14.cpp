#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int size = 2*n - 1;

    for(int r = 0; r < size; r++){
        for(int c = 0; c < size; c++){
            int dist = min({r, c, size-1-r, size-1-c});
            cout << (n - dist);
        }
        cout << "\n";
    }
    return 0;
}