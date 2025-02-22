class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        if(t>nums[nums.size()-1])
        {
            return nums.size();
        }
        else if(nums[0]>=t)
        {
                        
            return 0;
        }
        else
        {
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i]<t && t<=nums[i+1])
                {
                    cout<<i<<"first"<<endl;
                    return (i+1);
                }
                else if(nums[i]==t)
                {
                    cout<<i<<endl;
                    return i;
                }
            }
        }
        return -1;
    }
};
/*
1 5 6 7

如果nums[i]<t<nums[i+1]
則回傳 i+1

*/