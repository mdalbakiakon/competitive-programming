#include<bits/stdc++.h>
using namespace std;

int main(){
    string text;
    cin >> text;

    string result;
    int count = 0;

    for(int i = 0; i < text.size(); i++){
        if(text[i] == '.'){
            result += (count + '0');
            count = 0;
        } else {
            count++;
        }
    }

    
    result += to_string(count);
    
    cout << result << endl;
}