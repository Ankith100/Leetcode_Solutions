class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size(),sum = 0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        int l_sum = 0;
        for(int i=0;i<n;i++)
        {
            int r_sum = sum-l_sum-nums[i];
            if(l_sum == r_sum)
                return i;
            l_sum += nums[i];
        }
        return -1;
    }
};

//Link : https://leetcode.com/problems/find-the-middle-index-in-array/description/