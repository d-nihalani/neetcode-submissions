class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i:nums)  mp[i]++;

        priority_queue<pair<int,int>> pq;
        for(auto const& [a,b] : mp){
            pq.push({b,a});
        }

        vector<int> res;
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }      
        return res;
    }
};
