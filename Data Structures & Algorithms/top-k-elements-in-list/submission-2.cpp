class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
         for (int n : nums) {
            count[n]++;
        }

        vector<vector<int>> numbers(nums.size() + 1); 
        // store all numbers that appear n times
        for(const auto& [a,b] : count){
            numbers[b].push_back(a);
        }

        vector<int> res;
        for(int i= nums.size(); i>0; --i){
            for(int n : numbers[i]){
                res.push_back(n);
            }
                if(res.size()==k) break;
        } return res;
    }
};
