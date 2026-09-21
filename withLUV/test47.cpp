#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    string result;
    int i = 0;

    while(i < (int)str.size()){
        if(str[i] == '.'){
            result += '0';
            i += 1;
        } else { // str[i] == '-'
            if(str[i+1] == '.'){
                result += '1';
            } else { // str[i+1] == '-'
                result += '2';
            }
            i += 2;
        }
    }

    cout << result << endl;
}