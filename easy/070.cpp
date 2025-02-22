class Solution
{
    public:
    int climbStairs(int n)
    {
        if (n == 1) 
        {
            return 1;
        } 
        else if (n == 2)
        {
            return 2;
        }
        int a=1;
        int b=2;
        int ans=0;
        for(int i=3; i<=n; i++)
        {
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};

/*

只能走n步
代表n次1步到達頂部
代表n/2次2步到頂部

那麼在當我現在只差"一步"就能到達頂部時
我可能離頂部有兩步的距離
也可能只有一步的距離

*/