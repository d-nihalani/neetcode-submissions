class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // 1. Map to store the frequency vector as the key, 
        // and a list (vector) of matching strings as the value.
        map<vector<int>, vector<string>> mp;
        
        // 2. Build the map
        for (int i = 0; i < strs.size(); i++) {
            vector<int> temp(26, 0); // Create the character count vector
            
            // Count characters for the current string
            for (char c : strs[i]) {
                temp[c - 'a']++;
            }
            
            // Append the original string to the list for this specific count vector
            mp[temp].push_back(strs[i]); 
        }
        
        // 3. Extract the grouped anagrams into the final result
        vector<vector<string>> result;
        
        // Correct way to iterate over a map in C++
        for (auto pair : mp) {
            result.push_back(pair.second); // pair.second is the vector<string>
        }
        
        return result;
    }
};
