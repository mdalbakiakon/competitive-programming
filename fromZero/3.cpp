#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a = 5;
    long b = 6;
    long long c = 7; // long long is refers as x in typeid

    float d = 5.6;
    double e = 5.6;

    bool f = false;

    char g = 'c';

    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl; // it will show x
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;
    cout << typeid(f).name() << endl;
    cout << typeid(g).name() << endl;
}
