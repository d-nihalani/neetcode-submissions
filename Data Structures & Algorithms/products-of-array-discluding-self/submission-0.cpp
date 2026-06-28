class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> pref(nums.size(),  1);
        for(int i=0 ; i<nums.size(); i++){
            int n=0;
           while(n < i) {pref[i] *= nums[n]; n++;}
          // cout<<pref[i]<<endl;
        } 
        vector <int> suff(nums.size(),  1);

        for(int i=0 ; i<nums.size(); i++){
            int n=nums.size()-1;
           while(n > i) {suff[i] *= nums[n]; n--;}
           cout<<suff[i]<<endl;

        }

        vector<int> res (nums.size(), 1);
        for(int i=0 ; i<nums.size(); i++){
            res[i]= suff[i] * pref[i];
        }return res;
    }
};
