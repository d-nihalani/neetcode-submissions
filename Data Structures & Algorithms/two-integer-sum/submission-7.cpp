class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2) return {};
        
        unordered_map<int, int> mp; // Stores {number: index}
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // 1. Check if complement is in the map
            if (mp.find(complement) != mp.end()) {
                // Return the index of the complement and the current index 'i'
                return  {mp[complement], i};
            }
            
            // 2. If not found, add the current number and its index to the map

                mp[nums[i]] = i;
            }
        return {}; // Return empty if no solution is found
        }
        
    
};
