class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        int posIdx = 0;  // next even index (0, 2, 4, ...) for positives
        int negIdx = 1;  // next odd index (1, 3, 5, ...) for negatives
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                result[posIdx] = nums[i];
                posIdx += 2;
            } else {
                result[negIdx] = nums[i];
                negIdx += 2;
            }
        }
        
        return result;
    }
};