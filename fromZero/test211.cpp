class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;
        for (int x : aliceSizes) sumA += x;
        for (int y : bobSizes) sumB += y;

        unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());

        int diff = (sumB - sumA) / 2;

        for (int x : aliceSizes) {
            int y = x + diff;       
            if (bobSet.count(y)) {
                return {x, y};
            }
        }
        return {};
    }
};