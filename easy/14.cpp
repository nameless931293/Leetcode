class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int ans=200;//�̼˪��r���i�H��200��
        string s=strs[0];
        string store=strs[0];
        for(int i=1; i<strs.size(); i++)
        {
            string t=strs[i];
            int count=0;
            for(int j=0; j<t.length() && j<s.length(); j++)
            {  
                if(s[j]==t[j])
                {
                    count++;
                    store+=s[j];
                }
                else
                {
                    break;
                }      
            }
            ans=min(ans,count);
        }
        
        
        if(ans==0)
        {
            return "";
        }
        else
        {
            return store.substr(0,ans);
        }
    }
};