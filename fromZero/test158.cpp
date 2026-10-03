#include<bits/stdc++.h>
using namespace std;


int main(){

        vector<int> temp(score.begin(), score.end());
        sort(temp.begin(), temp.end(), greater<int>());

        unordered_map<int, string> prize_map;
        int pos = 4;

        for(int i=0; i<temp.size(); i++){
                if(i==0){
                       prize_map[temp[i]] = "Gold Medal"; 
                }else if(i==1){
                       prize_map[temp[i]] = "Silver Medal";
                }else if(i==2){
                       prize_map[temp[i]] = "Bronze Medal";
                }else{
                        prize_map[temp[i]] = pos + '0';
                        pos++;
                }
        }

        for(int i=0; i<score.size(); i++){
                cout << prize_map[score[i]] << " ";
        }
        
        cout << "\n";
}