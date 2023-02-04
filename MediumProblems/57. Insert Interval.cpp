class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& v) {
        int n = intervals.size(),i;
        for(i=0;i<n;i++)
            if(v[1]<intervals[i][0])
                break;
            cout<<i<<" ";
        if(i==0)
            intervals.insert(intervals.begin(),v);
        else
        {
            if(intervals[i-1][1]<v[0])     intervals.insert(intervals.begin()+i,v);
            else
            {
                int j;
                int end = intervals[i-1][1];
                for(j = i-1;j>=0;j--)
                {
                    if(intervals[j][0]<=v[0] || j==0 || intervals[j-1][1]<v[0])
                        break;
                    intervals.erase(intervals.begin()+j); 
                }
                intervals[j][0]=min(v[0],intervals[j][0]);
                intervals[j][1] = max(end,v[1]);
            }
        }
        return intervals;
    }
};

