class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        if(t.length()<s.length())
        {
            return false;
        }
        if(s=="")
        {
            return true;
        }
        int count=0;
        for(int i=0; i<t.length(); i++)
        {
            if(s[count]==t[i])
            {
                count++;
            }
            if(count==s.length())
            {
                return true;
            }
        }  
        return false;  
    }
};
//easy
//2024/11/11