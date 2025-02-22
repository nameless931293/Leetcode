class Solution {
public:
    void process(string& store, char c, bool & check, int &ans)
    {
        check=true;
        for(int i=0; i<store.length(); i++)
        {
            if(store[i]==c)//若遇到字元
            {
                check=false;  
                if(ans<store.length())//現有的最長字串長度比較小就更新
                {
                    ans=store.length();
                } 
                return;//return後怎麼辦
            }
        }
        if(check==true)
        {
            store.push_back(c);
            cout<<store<<endl;
        }
        if(ans<store.length())//現有的最長字串長度比較小就更新
        {
            ans=store.length();
            return;
        } 
    }
    int lengthOfLongestSubstring(string s) {
        //遇到不一樣的字元就收入,但比對的時候是要每個都比對一遍
        if(s.length()==0)
        {
            return 0;
        }
        if(s.length()==1)
        {
            return 1;
        }
        
        bool check=true;//用於判斷
        
        string store="";
        store.push_back(s[0]);//第一個必定收入
        
        int ans=0;//用來存最長不重複字串的長度
        
        for(int i=1; i<s.length(); i++)//方便控制s[i]到哪了
        {
            process(store, s[i], check, ans);
            if(check==false)//store內遇到相同字元的狀況
            {               
                store="";
                store.push_back(s[i]);
            }
        }
        return ans;
    }
};
//我現在該做的是將s[i]和所有的store比對
//之後在funtion內將s[i]加入store
//看到same字元就把之前相同的pop掉或抹消掉