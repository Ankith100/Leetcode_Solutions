class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long l = 0, r=0;
        int n = candies.size();
        for(int i=0;i<n;i++)
            r+=candies[i];
        while(l<r)
        {
            long long mid = l+(r+1-l)/2;
            long long children = 0;
            for(auto i:candies)
                children+=i/mid;
            if(children<k)
                r = mid-1;
            else
                l=mid;
        }
        return l;
    }
};
// Link : https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/