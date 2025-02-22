class Solution {
public:
    int strStr(string a, string b) {
        int ans=-1;
        bool end=false;
        if(b.length()>a.length())
        {
            return -1;
        }
        for(int i=0; i<a.length()-b.length()+1; i++)
        {
            for(int j=0; j<b.length(); j++)
            {
                if(a[i+j]==b[j])
                {
                    ans=i;
                    if(j==b.length()-1)
                    {
                       end=true; 
                    }
                    
                }
                if(a[i+j]!=b[j])
                {
                    ans=-1;                    
                    break;
                }
            }
            if(end==true)
            {
                break;
            }
        }
        return ans;
    }
};


