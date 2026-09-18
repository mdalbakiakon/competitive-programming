#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> terms;
        int place = 1;
        int temp = n;
        
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 0) {
                terms.push_back(digit * place);
            }
            temp /= 10;
            place *= 10;
        }

        cout << terms.size() << endl;

        for(int term :terms){
        	cout << term << " ";
        }
        
        cout << endl;
    }
}