//we have to avoid the situation which in the end of the string were ' '
class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<char> ans;
        bool start=false;
        reverse(s.begin(), s.end());
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=' ' || start==true)
            {
                start=true;
                if(s[i]!=' ')
                {
                    ans.push_back(s[i]); 
                }
                else
                {    
                    break;
                }
            }
            
        }
        return ans.size();
    }
};

/*----------------------------------------//
// The follwing is the wrong version of this question
// we have to consider that there could be a ' 'in the end of the string
class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<char> ans;
        reverse(s.begin(), s.end());
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=' ')
            {
                ans.push_back(s[i]); 
            }
            else
            {
                break;
            }
        }
        return ans.size();
    }
};
//-----------------------------------------*/