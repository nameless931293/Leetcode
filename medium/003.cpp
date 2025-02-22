class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int p = 0;//�����
        map<char, int> d;
        for (int i = 0; i < s.length(); i++)//i����k���
        {
        	if (d.find(s[i]) == d.end() || d[s[i]] < p) 
            {
        		ans = max(ans, i - p + 1);
			} 
            else 
            {
				p = d[s[i]] + 1;//�C���J�쭫�ƪ�, p�N���k���@��
			}
			d[s[i]] = i;
		}
		return ans;
    }
};