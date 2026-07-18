#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> set_of_nums;

        for(int i = 0; i < nums.size(); i++)
        {
            if(set_of_nums.contains(nums[i])) return true;

            set_of_nums.insert(nums[i]);
        }

        return false;
    }
};