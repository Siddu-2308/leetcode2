class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       sort(intervals.begin(),intervals.end());
       vector<vector<int>> ans;
        int start=intervals[0][0];
        int end=intervals[0][1];
       for(vector<int> i:intervals){
            if(i[0]<=end){
                end=max(i[1],end);
            }
            else{
                ans.push_back({start,end});
                start=i[0];
                end=i[1];
            }
       }
       ans.push_back({start,end});
       return ans;
    }
};