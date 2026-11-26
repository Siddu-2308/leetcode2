class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int a=1;
        while(s.find(a)!=s.end())a++;
        return a;
    }
};