class Solution {
public:
    void set_row(vector<vector<int>>& v,int i)
    {
        for(int j=0;j<v[0].size();j++)
            v[i][j]=0;
    }
    void set_col(vector<vector<int>>& v,int j)
    {
        for(int i=0;i<v.size();i++)
            v[i][j]=0;
    }
    void setZeroes(vector<vector<int>>& matrix)
    {
        int m = matrix.size(),n = matrix[0].size();
        vector<int> row(m),col(n);
        for(int i=0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }   
        for(int i=0;i<m;i++)
            if(row[i])
                set_row(matrix,i);
        for(int j=0;j<n;j++)
            if(col[j])
                set_col(matrix,j);

    }
};