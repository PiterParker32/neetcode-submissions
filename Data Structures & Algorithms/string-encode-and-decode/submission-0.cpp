class Solution {
public:

    string encode(vector<string>& strs) {
        
        string result = "";

        for(const auto& word : strs)
        {
            size_t size_of_word = word.size();
            string letters_of_size = to_string(size_of_word) + '#';
            result += letters_of_size;
            result += word;
        }

        return result;
    }

    vector<string> decode(string s) {
        
        vector<string> result;
        size_t i = 0;

        while(i < s.size())
        {
            string letters_of_size = "";
            while(s[i] != '#')
            {
                letters_of_size += s[i++];
            }

            size_t size_of_word = stoi(letters_of_size);
            string word = "";
            size_t end_of_word = i + size_of_word;

            while(i < end_of_word)
            {
                word += s[++i];
            }

            result.push_back(word);
            i++;
        }

        return result;
    }
};
