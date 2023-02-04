class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int> temp = intervals[0];
        bool flag = 0;
        for(int i=1;i<intervals.size();i++)
        {
            if(temp[1]<intervals[i][0])
            {
                ans.push_back(temp);
                temp = intervals[i];
            }
            else
            {
                temp[1] = max(temp[1], intervals[i][1]);
            }
        }
        ans.push_back(temp);
        return ans;
    }

};