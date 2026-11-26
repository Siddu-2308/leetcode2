class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        while(start<=end){
            long mid=start+(end-start)/2;
            if(1LL*mid*mid==x){
                return mid;
            }
            else if(1LL*mid*mid<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return end;
    }
};