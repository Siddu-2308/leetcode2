class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int i=digits.size()-1;
        do{
            carry=(digits[i]+1)/10;
            digits[i]=(digits[i]+1)%10;
            i--;
        }while(carry && i>=0);
        if(carry){
            digits.insert(digits.begin(), 1);  
        }
        return digits;

    }
};