class Solution
{
    public:
        int Length(string s, int left, int right)
        {
            /*
                回文右邊界索引 - 回文左邊界索引 + 1
                實際左邊界 = left + 1
                實際右邊界 = right - 1
                長度 = (right - 1) - (left + 1) + 1  => right - left - 1
            */
            while(left>=0 && right<s.length() && s[left]==s[right])//條件擺放順序很重要
            {
                left--;
                right++;
            }
            //cout<<left<<" "<<right<<" "<<right-left-1<<endl;
            return right-left-1;
        }
        string Search(string s)//控制索引遍立每個字元
        {
            if (s.empty()) 
            {
                return "";
            }
            int start=0;//隨每次Length呼叫更新
            int end=0;//同上
            for(int i=0; i<s.length(); i++)
            {
                int odd=Length(s,i,i);
                int even=Length(s,i,i+1);
                int length=max(odd, even);
                if(length>end-start+1)
                {
                    start=i-(length-1)/2;
                    end=i+length/2;
                }
            }
            return s.substr(start,end-start+1);
        }
};