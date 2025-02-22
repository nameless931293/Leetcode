class Solution
{
    public:
        void process(string& store, char c, string& s, int& count)//負責新增字元到store
        {
            int control=store.length();
            for(int i=0; i<control; i++)//控制store引數變化
            {
                cout<<"字元"<<c<<endl;
                cout<<i<<endl;
                if(store[i]==c)
                {
                    if(store.length()>count)//
                    {
                        count=store.length();
                    }
                    
                    int tem=store.find(s);
                    store.erase(tem,store.length());//抹除s內相同的部分
                    cout<<"抹除結果"<<s;
                    //但移除後s[i]還是要存進來
                    store="";
                    //cout<<"相同重製"<<store;
                    //store.push_back(s[0]);
                    cout<<"相同重製"<<store<<endl;
                    
                }
                else if(store[i]!=c && i==control-1)//不同就加到store,但注意不要重複加
                {
                    cout<<"now"<<i<<endl;
                    store.push_back(c);
                    cout<<store<<endl<<c<<endl;
                    if(store.length()>count)
                    {
                        count=store.length();
                    } 
                }
            }
            return;
        }
        int lengthOfLongestSubstring(string s)
        {
            if(s.length()<=1)//若s是空或只有一長度則立即回傳
            {
                return s.length();
            }
            
            string store="";//存最長不重複字串
            store.push_back(s[0]);//第一個字元必定收入

            int count=1;//紀錄store的長度

            for(int i=1; i<s.length(); i++)//控制傳入process的字元
            {
                if(store.length()==0)
                {
                    store.push_back(s[i]);
                }
                else
                {
                    process(store, s[i], s, count);
                }
                
            }
            return count;
        }
};    

/*如果我用pop的方式會有啥結果
    思路:
    1.pwwekw 這種第二個遇到w後就記下pw的長度並pop掉pw
      並改以第二個w當作新的store
    2.abcabcbb這種則是遇到相同的就抹除第一個a
    結論:
    1.根據example得出本題是用思路1
*/
//找到最長且不出現重複字元的字串

/*
Given a string s, find the length of the longest substring without repeating characters.

Example 1:
    Input: s = "abcabcbb"
    Output: 3
    Explanation: The answer is "abc", with the length of 3.
Example 2:
    Input: s = "bbbbb"
    Output: 1
    Explanation: The answer is "b", with the length of 1.
Example 3:
    Input: s = "pwwkew"
    Output: 3
    Explanation: The answer is "wke", with the length of 3.
    Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

    0 <= s.length <= 5 * 104
    s consists of English letters, digits, symbols and spaces.

*/


ab
b
ab
b
ab
b