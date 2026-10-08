class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> set_num;
        for(int &n : nums) set_num.insert(n);

        if(set_num.size() < 3) return *set_num.rbegin();
        else{
            int n = 3;
            int res;
            while(n--){
                res = *set_num.rbegin();
                set_num.erase(res);
            }
            return res;
        }
    }
};