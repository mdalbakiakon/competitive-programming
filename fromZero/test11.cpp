#include<bits/stdc++.h>
using namespace std;

int main(){
    int savings;
    cin >> savings;

    int count = 0;

    while(savings > 0){
        if(savings >= 100){
            savings -= 100;
            count += 1;
            // cout << "using 100" << endl;
        }
        else if(savings >= 20){
            savings -= 20;
            count += 1;
            // cout << "using 20" << endl;
        }
        else if(savings >= 10){
            savings -= 10;
            count += 1;
            // cout << "using 10" << endl;
        }
        else if(savings >= 5){
            savings -= 5;
            count += 1;
            // cout << "using 5" << endl;
        }
        else{
            savings -= 1;
            count += 1;
            // cout << "using 1" << endl;
        }
    }

    cout << count << endl;
}