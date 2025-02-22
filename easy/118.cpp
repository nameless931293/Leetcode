class Solution {
public:
    
    void state(int& rows, vector<vector<int>> &store)//�w�]�b�j��2�����p
    {
        int control=3;
        //�ݭn�B�⪺�������Oindex=> 1~n-2, �ӨC��u��n�Ӽ�
        for(int i=2; i<rows; i++)//�C�@��i�N��C�@�h����ȵ{��
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
        if (rows == 0) return store;  // �p�G��ƬO 0�A������^��

        // ��l�ƲĤ@�h
        store.push_back({1});
        if (rows == 1) return store;  // �Y�u�ݭn 1 �h�A������^

        // ��l�ƲĤG�h
        store.push_back({1, 1});
        if (rows == 2) return store;  // �Y�u�ݭn 2 �h�A������^

        // �B�z�Ѿl�h��
        state(rows, store);
        return store;
    }
};

