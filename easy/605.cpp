//可以 以1前後的樣子來思考或以我們要放的"1"來思考
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        //價如有五位要放三盆就有可能出問題導致最後只種出2個
        //於是下面這個if就能解決此問題並同時讓for不必考慮到其中一個超出範圍的可能
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
            if(i+1<flowerbed.size())//控制索引不超過範圍
            {
                if(flowerbed[i]!=1 && flowerbed[i-1]!=1 && flowerbed[i+1]!=1)//看當前的元素前後是否等於1
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