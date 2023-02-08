class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> pre(n),ans(queries.size());
        pre[0]=arr[0];
        for(int i=1;i<n;i++)
            pre[i] = pre[i-1]^arr[i];
        int i = 0;
        for(auto &v:queries)
            ans[i++] = pre[v[1]]^pre[v[0]]^arr[v[0]]; 
        return ans;
    }
};
//Link : https://leetcode.com/problems/xor-queries-of-a-subarray/description/