class Solution
{
    public:
        void process(string& store, char c, string& s, int& count)//�t�d�s�W�r����store
        {
            int control=store.length();
            for(int i=0; i<control; i++)//����store�޼��ܤ�
            {
                cout<<"�r��"<<c<<endl;
                cout<<i<<endl;
                if(store[i]==c)
                {
                    if(store.length()>count)//
                    {
                        count=store.length();
                    }
                    
                    int tem=store.find(s);
                    store.erase(tem,store.length());//�ٰ�s���ۦP������
                    cout<<"�ٰ����G"<<s;
                    //��������s[i]�٬O�n�s�i��
                    store="";
                    //cout<<"�ۦP���s"<<store;
                    //store.push_back(s[0]);
                    cout<<"�ۦP���s"<<store<<endl;
                    
                }
                else if(store[i]!=c && i==control-1)//���P�N�[��store,���`�N���n���ƥ[
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
            if(s.length()<=1)//�Ys�O�ũΥu���@���׫h�ߧY�^��
            {
                return s.length();
            }
            
            string store="";//�s�̪������Ʀr��
            store.push_back(s[0]);//�Ĥ@�Ӧr�����w���J

            int count=1;//����store������

            for(int i=1; i<s.length(); i++)//����ǤJprocess���r��
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

/*�p�G�ڥ�pop���覡�|��ԣ���G
    ���:
    1.pwwekw �o�زĤG�ӹJ��w��N�O�Upw�����ר�pop��pw
      �ç�H�ĤG��w��@�s��store
    2.abcabcbb�o�ثh�O�J��ۦP���N�ٰ��Ĥ@��a
    ����:
    1.�ھ�example�o�X���D�O�Ϋ��1
*/
//���̪��B���X�{���Ʀr�����r��

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