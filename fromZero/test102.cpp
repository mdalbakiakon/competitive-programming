#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int maximum = max(a, b);
    int minimum = min(a, b);
    int remaining = maximum - minimum;
    int days = remaining / 2;

    cout << minimum << " " << days << "\n";
}