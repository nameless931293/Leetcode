class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        //思路:把同樣長度的字元部分都加進來, 有多的就接上去即可
        int s=word1.length();
        if(s>word2.length())
        {
            s=word2.length();
        }
        string store;
        int count=0;
        for(int i=0; i<s; )
        {
            if(count>=s)
            {
                break;
            }
            store.push_back(word1[i]);
            word1.erase(0, 1);  // Removes the first character of the string
            store.push_back(word2[i]);
            word2.erase(0, 1);
            count++;            
        }
        if(word1.length()!=word2.length())
        {
            if(s=word1.length())//word1較短
            {
                store+=word1;
            }
            else store+=word2;
        }
        return store;
    }
};