class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector <int> store;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>=-100)
            {
                store.push_back(nums[i]);
            }      
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i]==nums[j])
                {
                    nums[j]=-1000;
                }
            }
        }
        sort(store.begin(),store.end());
        nums=store;
        return nums.size();
    }
};
