class Solution { 
    public: 
    double findMaxAverage(vector<int>& nums, int k) 
    { 
        //�Τ@�Ӱ϶��@�Ӱ϶��ݪ��覡
        double store;
        for(int i=0; i<k; i++)//���N�ek�ӥ[�_��
        {
            store+=nums[i];
        }
        double compare=store;
        for(int i=k; i<nums.size(); i++)
        {
            compare+=nums[i]-nums[i-k];
            store=max(compare,store);
            
        }
        return store/k;
    } 
};
//2024/11/10