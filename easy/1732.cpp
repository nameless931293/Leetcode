class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        //��s��vector�Ĥ@�ӥ��w��0
        //���L�����Ҽ{�svector
        //�Q�Τ@���ܼƬ���
        int highest=0;
        int temp=0;
        for(int i=0; i<gain.size(); i++)
        {
            
            temp+=gain[i];
            if(highest<temp)
            {
                highest=temp;
            }
        }
        
        return highest;
    }
};
//easy
//2024/11/11