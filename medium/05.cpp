class Solution
{
    public:
        int Length(string s, int left, int right)
        {
            /*
                �^��k��ɯ��� - �^�奪��ɯ��� + 1
                ��ڥ���� = left + 1
                ��ڥk��� = right - 1
                ���� = (right - 1) - (left + 1) + 1  => right - left - 1
            */
            while(left>=0 && right<s.length() && s[left]==s[right])//�����\�񶶧ǫܭ��n
            {
                left--;
                right++;
            }
            //cout<<left<<" "<<right<<" "<<right-left-1<<endl;
            return right-left-1;
        }
        string Search(string s)//������޹M�ߨC�Ӧr��
        {
            if (s.empty()) 
            {
                return "";
            }
            int start=0;//�H�C��Length�I�s��s
            int end=0;//�P�W
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