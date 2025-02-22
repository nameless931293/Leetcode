class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        //更新的vector第一個必定為0
        //不過不必考慮新vector
        //利用一個變數紀錄
        int highest=0;
        int temp=0;
        for(int i=0; i<gain.size(); i++)
        {
            
            temp+=gain[i];
            if(highest<temp)
            {
                highest=temp;
            }
        }
        
        return highest;
    }
};
//easy
//2024/11/11