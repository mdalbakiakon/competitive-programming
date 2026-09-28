#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        map<int, set<int>> map_num;

        int hands = 4;
        while(hands--){
            int x, y;
            cin >> x >> y;
            map_num[x].insert(y);
        }

        vector<int> spreads;
        for(auto &[x, set_y] : map_num){
            spreads.push_back(abs(*set_y.rbegin() - *set_y.begin()));
        }

        cout << (long long)spreads[0] * spreads[1] << "\n";
    }
}