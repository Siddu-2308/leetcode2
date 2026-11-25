class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        int r=0;
        for(int i=0;i<nums.size();i++){
            int lpr=(total-nums[i]);
            if(i>0){
                r+=nums[i-1];
            }
            if(lpr==2*r){
                return i;
            }
        }
        return -1;
    }
};