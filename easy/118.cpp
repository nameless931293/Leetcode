class Solution {
public:
    
    void state(int& rows, vector<vector<int>> &store)//預設在大於2的情況
    {
        int control=3;
        //需要運算的部分都是index=> 1~n-2, 而每行只有n個數
        for(int i=2; i<rows; i++)//每一個i代表每一層的塞值程序
        {
            if(control>rows) return;
            vector<int>temp;
            temp.push_back(1);
            for(int j=0; j<store[i - 1].size() - 1; j++)
            {
                int add= (store[i-1][j] + store[i-1][j+1]);
                temp.push_back(add);
            }
            temp.push_back(1);
            store.push_back(temp);
            control++;
        }
    }

    vector<vector<int>> generate(int rows) 
    {
        vector<vector<int>> store;
        if (rows == 0) return store;  // 如果行數是 0，直接返回空

        // 初始化第一層
        store.push_back({1});
        if (rows == 1) return store;  // 若只需要 1 層，直接返回

        // 初始化第二層
        store.push_back({1, 1});
        if (rows == 2) return store;  // 若只需要 2 層，直接返回

        // 處理剩餘層數
        state(rows, store);
        return store;
    }
};

