#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;

    bool flag = true;

    for(int i=0; i<row; i++){
        if(i%2==0){
            for(int j=0; j<col; j++){
                cout << '#';
            }
        }else{
            if(flag){


            for(int j=0; j<col-1; j++){
                cout << '.';
            }
            cout << '#';
            flag = false;
            }
            else{
                cout << '#';
                for(int j=1; j<col; j++){
                cout << '.';
                }
                flag = true;   
            }
        }
        cout << endl;
    }
}