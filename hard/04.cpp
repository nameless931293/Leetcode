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

    if(nums1.size()%2==0)//����
    {
        a=(nums1.size())/2;
        ans=(float)(nums1[a-1]+nums1[a])/2;
    }
    else//�_��
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
        if(nums1.size()%2==0)//����
        {
            int a=(nums1.size())/2;
            ans=(double)(nums1[a-1]+nums1[a])/2;
        }
        else//�_��
        {
            ans=(double)(nums1[(nums1.size())/2]);
        }
        return ans;
    }
    
};
/*
�Y��̨䤤�@��size�O0


�ۥ[��sort
*��̪�size�ۥ[����_��
*�N��/2�Y�O����

*�Y�O����
1 2 3 4 5 6
*�ۥ[��size/2 �M size/2 -1 �ۥ[��2

*/
