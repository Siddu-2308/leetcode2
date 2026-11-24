class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        int n=s.length();
        int count[26]={0};
        for(int i=0;i<n;i++)
        {
            count[s[i]-'a']++;
        }
        for(int i=0;i<n;i++)
        {
            if(count[t[i]-'a']==0)
            {
                return false;
            }
            count[t[i]-'a']--;
        }
        return true;
    }
};