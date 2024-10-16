class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Hashmap to store the sorted string as the key and group of anagrams as values
        unordered_map<string, vector<string>> anagramGroups;

        for (string s : strs) {
            // Sort the string to use as a key
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());

            // Add the original string to the group corresponding to this sorted key
            anagramGroups[sortedStr].push_back(s);
        }

        // Prepare the result by extracting the grouped anagrams from the hashmap
        vector<vector<string>> res;
        for (auto& group : anagramGroups) {
            res.push_back(group.second);
        }

        return res;
    }
};
