class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int r=n.size()-1, l =0;

        while(n[l]+n[r] != target){
            while(n[r]+n[l] > target) r--;
            while(n[r]+n[l] < target) l++;
            if(l>=r)  return {};
            
        }
        return {l+1, r+1};
    }
};
