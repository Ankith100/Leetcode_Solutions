class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size(), ans = 0;
        vector<int> height(m);
        for(int i=0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(matrix[i][j]==0)     height[j]=0;
                else                    height[j]++;
            }
            vector<int> temp = height;
            sort(temp.begin(),temp.end());
            for(int j = 0;j<m;j++)
                ans = max(ans, temp[j]*(m-j));
        }
        return ans;
    }
};
//Link : https://leetcode.com/problems/largest-submatrix-with-rearrangements/