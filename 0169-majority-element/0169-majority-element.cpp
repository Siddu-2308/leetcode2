class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums[0];
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                // reset
                maj = nums[i];
                count = 0;
            }
            if (maj == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        return maj;
    }
};