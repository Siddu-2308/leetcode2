class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Step 1: Store prefix products in ans
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        // Step 2: Maintain suffix product using one variable
        int suff = 1;

        for (int i = n - 1; i >= 0; i--) {
            // Combine prefix product with suffix product
            ans[i] *= suff;

            // Update suffix for the next iteration
            suff *= nums[i];
        }

        return ans;
    }
};