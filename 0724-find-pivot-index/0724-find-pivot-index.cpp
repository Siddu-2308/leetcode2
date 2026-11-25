class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        int l=0;
        for(int i=0;i<nums.size();i++){
            int lpr=(total-nums[i]);
            if(i>0){
                l+=nums[i-1];
            }
            if(lpr==2*l){
                return i;
            }
        }
        return -1;
    }
};