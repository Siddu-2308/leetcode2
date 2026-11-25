class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }
        int l = 0;
        for (int i = 0; i < nums.size(); i++) {
            int lpr = (total - nums[i]);
            if (lpr == 2 * l) {
                return i;
            }

            l += nums[i];
        }
        return -1;
    }
};