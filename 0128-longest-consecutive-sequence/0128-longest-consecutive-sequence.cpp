class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        int count=0;
        for(int i:s){
            if(s.find(i-1)==s.end()){
                int number=i;
                count=0;
                while(s.find(number)!=s.end()){
                    count++;
                    number++;
                }
                ans=max(count,ans);
            }
        }
        return ans;
    }
};