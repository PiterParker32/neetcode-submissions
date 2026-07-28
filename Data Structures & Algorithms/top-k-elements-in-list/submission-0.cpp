class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> key_frequency;
        vector<pair<int, int>> frequency_vector;
        vector<int> result;

        for(const int i : nums)
        {
            key_frequency[i]++;
        }

        for(const auto& pair : key_frequency)
        {
            frequency_vector.push_back({pair.second, pair.first});
        }

        nth_element(frequency_vector.begin(), frequency_vector.end() - k, frequency_vector.end());

        for(int i = frequency_vector.size() - k; i < frequency_vector.size(); i++)
        {
            result.push_back(frequency_vector[i].second);
        }

        return result;
    }
};
