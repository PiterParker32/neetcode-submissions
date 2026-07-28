class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> id_anagrams;
        vector<vector<string>> result;

        for(size_t i = 0; i < strs.size(); i++)
        {
            string id = strs[i];
            sort(id.begin(), id.end());

            id_anagrams[id].push_back(strs[i]);
        } 

        for(const auto& pair : id_anagrams)
        {
            result.push_back(pair.second);
        }

        return result;
    }
};
