class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int p = 0;//左邊框
        map<char, int> d;
        for (int i = 0; i < s.length(); i++)//i擔任右邊框
        {
        	if (d.find(s[i]) == d.end() || d[s[i]] < p) 
            {
        		ans = max(ans, i - p + 1);
			} 
            else 
            {
				p = d[s[i]] + 1;//每次遇到重複的, p就往右移一格
			}
			d[s[i]] = i;
		}
		return ans;
    }
};