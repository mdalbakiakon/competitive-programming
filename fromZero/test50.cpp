#include<bits/stdc++.h>
using namespace std;

int check_last_digit_3(int n){
    return (n % 10 == 3);
}

int check_divisible_by_3(int n){
    return (n % 3 == 0);
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int result = 0;
        int i = 1;

        while(n--){
            while(check_last_digit_3(i) || check_divisible_by_3(i)){
                i++;
            }
            result = i;
            i++;
        }

        cout << result << endl;
    }
}