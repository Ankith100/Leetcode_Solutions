class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int ans=nums[0],s=0;
        for(int i=1;i<n;i++)
        {
            int temp = ans;
            ans = max(ans,nums[i]+s);
            s = temp;
            cout<<ans<<" "<<s<<endl;
        }
        return ans;
    }
};
//Link : https://leetcode.com/problems/house-robber/description/