#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        if(str == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    string str = "BanglaDesh";
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
}   