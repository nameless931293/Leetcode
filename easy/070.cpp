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

�u�ਫn�B
�N��n��1�B��F����
�N��n/2��2�B�쳻��

����b��ڲ{�b�u�t"�@�B"�N���F������
�ڥi������������B���Z��
�]�i��u���@�B���Z��

*/