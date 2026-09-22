class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        unordered_map<int, int> freq;
        
        for(int num : arr){
            freq[num]++;
        }
        
        if(freq.count(target) == 0){
            return 0;
        }else{
            return freq[target];
        }
    }
};
