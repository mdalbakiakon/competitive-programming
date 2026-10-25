class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_set<int> mySet;
        for(int i=0; i<n; i++) mySet.insert(candyType[i]);
        int uni = mySet.size();
        if(uni <= n/2) return uni;
        else return n/2;
    }
};