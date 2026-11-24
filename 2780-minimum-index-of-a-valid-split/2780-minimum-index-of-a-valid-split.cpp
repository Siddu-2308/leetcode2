class Solution {
public:
    int majority(vector<int>& nums) {
        int maj = nums[0];
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                // reset
                maj = nums[i];
            }
            if (maj == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        return maj;
    }
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        int maj = majority(nums);
        int totalFreq = 0;
        for (int num : nums) {
            if (num == maj) totalFreq++;
        }

        int leftFreq = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == maj) leftFreq++;
            int rightFreq = totalFreq - leftFreq;
            
            if (leftFreq * 2 > i + 1 && rightFreq * 2 > n - 1 - i) {
                return i;
            }
        }
        return -1;
    }
};