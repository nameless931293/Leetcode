#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> removeDuplicates(std::vector<int>& nums) {
        std::vector<int> store;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= -100) {
                store.push_back(nums[i]);
            }      
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] == nums[j]) {
                    nums[j] = -1000;
                }
            }
        }
        std::sort(store.begin(), store.end());
        return store;
    }
};

int main() {
    std::vector<int> nums = {1, 1, 2};
    Solution sol;
    std::vector<int> uniqueNums = sol.removeDuplicates(nums);
    std::cout << "Unique elements: [";
    for(int i = 0; i < uniqueNums.size(); i++) {
        std::cout << uniqueNums[i];
        if(i != uniqueNums.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
