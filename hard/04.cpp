#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int a=0;
    float ans=0.0;
    vector <int> nums1{1,3};
    vector <int> nums2{2,4};
    for(auto &i: nums2)
    {
        nums1.push_back(i);
    }
    sort(nums1.begin(),nums1.end());
    
    /*
    for(auto &i:nums1)
    {
        cout<<i<<endl;
    }
    */

    if(nums1.size()%2==0)//案计
    {
        a=(nums1.size())/2;
        ans=(float)(nums1[a-1]+nums1[a])/2;
    }
    else//计
    {
        ans=(float)(nums1[(nums1.size())/2]);
    }
    
    cout<<fixed<<setprecision(5)<<ans;
}



/*
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        for(auto i: nums2)
        {
            nums1.push_back(i);
        }
        sort(nums1.begin(), nums1.end());
        if(nums1.size()%2==0)//案计
        {
            int a=(nums1.size())/2;
            ans=(double)(nums1[a-1]+nums1[a])/2;
        }
        else//计
        {
            ans=(double)(nums1[(nums1.size())/2]);
        }
        return ans;
    }
    
};
/*
璝ㄢㄤいよsize琌0


sort
*ㄢsize单计
*盢ㄤ/2琌氮

*璝琌案计
1 2 3 4 5 6
*size/2 ㎝ size/2 -1 埃2

*/
