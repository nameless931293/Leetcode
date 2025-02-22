class Solution { 
    public: 
    double findMaxAverage(vector<int>& nums, int k) 
    { 
        //用一個區塊一個區塊看的方式
        double store;
        for(int i=0; i<k; i++)//先將前k個加起來
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