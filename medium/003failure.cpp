class Solution {
public:
    void process(string& store, char c, bool & check, int &ans)
    {
        check=true;
        for(int i=0; i<store.length(); i++)
        {
            if(store[i]==c)//�Y�J��r��
            {
                check=false;  
                if(ans<store.length())//�{�����̪��r����פ���p�N��s
                {
                    ans=store.length();
                } 
                return;//return�����
            }
        }
        if(check==true)
        {
            store.push_back(c);
            cout<<store<<endl;
        }
        if(ans<store.length())//�{�����̪��r����פ���p�N��s
        {
            ans=store.length();
            return;
        } 
    }
    int lengthOfLongestSubstring(string s) {
        //�J�줣�@�˪��r���N���J,����諸�ɭԬO�n�C�ӳ����@�M
        if(s.length()==0)
        {
            return 0;
        }
        if(s.length()==1)
        {
            return 1;
        }
        
        bool check=true;//�Ω�P�_
        
        string store="";
        store.push_back(s[0]);//�Ĥ@�ӥ��w���J
        
        int ans=0;//�ΨӦs�̪������Ʀr�ꪺ����
        
        for(int i=1; i<s.length(); i++)//��K����s[i]����F
        {
            process(store, s[i], check, ans);
            if(check==false)//store���J��ۦP�r�������p
            {               
                store="";
                store.push_back(s[i]);
            }
        }
        return ans;
    }
};
//�ڲ{�b�Ӱ����O�Ns[i]�M�Ҧ���store���
//����bfuntion���Ns[i]�[�Jstore
//�ݨ�same�r���N�⤧�e�ۦP��pop���Ωٮ���