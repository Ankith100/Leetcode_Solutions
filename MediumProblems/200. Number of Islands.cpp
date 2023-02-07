class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j,vector<vector<bool>> &vis)
    {
        int n = grid.size(),m=grid[0].size();
        vis[i][j] = 1;
        vector<int> dx = {1,-1,0,0};
        vector<int> dy =  {0,0,1,-1};
        for(int ind=0;ind<4;ind++)
        {
            int x = i+dx[ind],y=j+dy[ind];
            if(x>=0 && x<n && y>=0 && y<m && vis[x][y] == 0 && grid[x][y] == '1')
                dfs(grid,x,y,vis);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(),m=grid[0].size(),cnt=0;;
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(vis[i][j]==0 && grid[i][j] == '1')
                {
                    dfs(grid,i,j,vis);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
// Link : https://leetcode.com/problems/number-of-islands/description/