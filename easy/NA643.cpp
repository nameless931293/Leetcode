//單看結果是可以, 但是題目要求時間問題
class Solution { 
public: 
    double findMaxAverage(vector<int>& nums, int k) 
    { 
        double ans = -1000000; // 若設為 0 可能會出現無法被覆蓋的問題 
        if (nums.size() - k) 
        { 
            for (int i = 0; i <= nums.size() - k; i++) 
            { 
                double temp = 0; 
                for (int j = i; j < k + i; j++) // 將連續的數字加起來 
                {  
                    temp += nums[j]; 
                } 
                if (ans < temp) 
                { 
                    ans = temp; 
                } 
            } 
            return ans / k; 
        } 
        else 
        { 
            double temp = 0; 
            for (int i = 0; i < nums.size(); i++) 
            { 
                temp += nums[i]; 
            } 
            if (temp > ans) 
            { 
                ans = temp; 
                return ans / k; 
            } 
        } 
        return ans / k; 
    } 
};
//2024/11/9

