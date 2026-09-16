#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;

    for(int i=0; i<row; i++){
        if(i%2==0){
            for(int j=0; j<col; j++){
                cout << '#';
            }
        }else{
            for(int j=0; j<col-1; j++){
                cout << '.';
            }
            cout << '#';
        }
        cout << endl;
    }
}