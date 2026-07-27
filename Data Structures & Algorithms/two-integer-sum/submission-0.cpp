class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> number_index;
        vector<int> result;

        for(size_t i = 0; i < nums.size(); i++)
        {
            int search = target - nums[i];

            if(number_index.contains(search))
            {
                result.push_back(number_index[search]);
                result.push_back(i);
                return result;
            }
            else
            {
                number_index[nums[i]] = i;
            }
        }

        return {};
        
    }
};
