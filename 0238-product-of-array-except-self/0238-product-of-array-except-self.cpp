class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> sol(nums.size(),1);
        vector<int> suff(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            sol[i]=sol[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            suff[i]=suff[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            sol[i]=sol[i]*suff[i];
        }
        return sol;
    }
};