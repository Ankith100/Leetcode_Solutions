class Solution {
public:
    int waysToSplit(vector<int>& nums) {
        int sum = 0, n = nums.size();
        for(int i=0;i<n;i++)
            sum+=nums[i];

        vector<int> pre(n);
        pre[0] = nums[0];
        for(int i=1;i<n;i++)
            pre[i]=nums[i]+pre[i-1];

        int left = 0, ans = 0, mod = 1000000007;
        for(int i=0;i<n-2;i++)
        {
            left += nums[i];
            if(left>sum/3)  return ans;
            int midSumMin = 2*left;
            int midStart = lower_bound(pre.begin()+i+1,pre.end(),midSumMin)-pre.begin();

            int midSumMax = (sum-left)/2+left;
            int midEnd = upper_bound(pre.begin()+i+1,pre.begin()+n-1,midSumMax)-pre.begin();
            midEnd--;
            ans = (ans+midEnd-midStart+1)%mod;
        }
        return ans;
    }
};
//Link : https://leetcode.com/problems/ways-to-split-array-into-three-subarrays/description/