class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        long long l_sum = 0;
        int cnt = 0;
        for(int i=0;i<n-1;i++)
        {
            l_sum += nums[i];
            long long r_sum = sum - l_sum;
            if(l_sum >= r_sum)
                cnt++;
        }
        return cnt;
    }
};

//Link : https://leetcode.com/problems/number-of-ways-to-split-array/description/