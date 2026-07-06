class Solution {
public:
    int maxArea(vector<int>& a) {
        int n= a.size();
        int r=n-1 , l =0; 
        int ans=0;
        while (l <r){
            int csize= (r-l) * min(a[l],a[r]);
            ans = max(csize , ans);
            if (a[l] > a[r]) r--;
            else if (a[l] < a[r]) l++;
            else {r-- ; l++;}
        } return ans;
    }
};
