#include <iostream>
#include <map>
#include <vector>
using namespace std;

class imformation {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> ans;
        map<int, int> mp;
        for(int i:nums1)
        {
            mp[i]=1;
        }
        for(int i:nums2)
        {
            if(mp[i]==1)
            {
                mp[i]++;
            }
        }
        for(auto x:mp)
        {
            if(x.second>1)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
/*


*/
int main()
{
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2};
    imformation imformation;
    vector<int> ans=imformation.intersection(nums1,nums2);
    for(int x:ans)
    {
        cout<<x;
        cout<<endl;
    }

}