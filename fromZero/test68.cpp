#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) cin >> vec[i];

    int amazing = 0;
    
    int best_low = vec[0];
    int best_high = vec[0];


    for(int i=1; i<n; i++){
        if(vec[i] < best_low){
            best_low = vec[i];
            amazing++;
        }
        if(vec[i] > best_high){
            best_high = vec[i];
            amazing++;
        }
    }

    cout << amazing << "\n";
}