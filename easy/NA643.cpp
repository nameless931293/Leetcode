//��ݵ��G�O�i�H, ���O�D�حn�D�ɶ����D
class Solution { 
public: 
    double findMaxAverage(vector<int>& nums, int k) 
    { 
        double ans = -1000000; // �Y�]�� 0 �i��|�X�{�L�k�Q�л\�����D 
        if (nums.size() - k) 
        { 
            for (int i = 0; i <= nums.size() - k; i++) 
            { 
                double temp = 0; 
                for (int j = i; j < k + i; j++) // �N�s�򪺼Ʀr�[�_�� 
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

