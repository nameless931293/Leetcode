//�i�H �H1�e�᪺�ˤl�ӫ�ҩΥH�ڭ̭n��"1"�ӫ��
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        //���p������n��T�ִN���i��X���D�ɭP�̫�u�إX2��
        //��O�U���o��if�N��ѨM�����D�æP����for�����Ҽ{��䤤�@�ӶW�X�d�򪺥i��
        if(n==0) return true;
        if(flowerbed.size()==1 && n==1)
        {
            if(flowerbed[0]==1)
            {
                return false;
            }
            else return true;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0)
        {
            n--;
            flowerbed[0]=1;
        }
        if(flowerbed[(flowerbed.size()-1)]==0 && flowerbed[(flowerbed.size()-2)]!=1)
        {
            n--;
            flowerbed[flowerbed.size()-1]=1;
        }
        if(n<=0) return true;
        for(int i=1; i<flowerbed.size(); i++)
        {
            if(i+1<flowerbed.size())//������ޤ��W�L�d��
            {
                if(flowerbed[i]!=1 && flowerbed[i-1]!=1 && flowerbed[i+1]!=1)//�ݷ�e�������e��O�_����1
                {
                    flowerbed[i]=1;
                    n--;
                }
                if(n==0)
                {
                    return true;
                }cout<<n<<","<<i<<endl;
            }
        }    
        return false;
    }
};