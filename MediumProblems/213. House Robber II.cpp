class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)    return nums[0];
        int ans1=nums[0],s=0;
        for(int i=1;i<n-1;i++)
        {
            int temp = ans1;
            ans1 = max(ans1,nums[i]+s);
            s = temp;
        }
        s=0;
        int ans2 = nums[1];
        for(int i=2;i<n;i++)
        {
            int temp = ans2;
            ans2 = max(ans2,nums[i]+s);
            s = temp;
        }
        return max(ans1,ans2);
    }
};
//Link : https://leetcode.com/problems/house-robber-ii/