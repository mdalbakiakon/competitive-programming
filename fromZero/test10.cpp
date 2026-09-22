#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int digits = ((n > 0) ? floor(log10(n)) + 1 : 1);
        int dec = pow(10, digits-1);

        int rev = 0;
    

        while(n > 0){
            int last_digit = n%10;
            int digit_wise = last_digit * dec;
            rev += digit_wise;
            n /= 10;
            dec /= 10;
        }

        cout << rev << endl;
    }

}