class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2)
    {
        //cases that are not overlapping
        if(rec2[2]<=rec1[0] || rec1[2]<=rec2[0] || rec2[1]>=rec1[3] || rec1[1]>=rec2[3] )
            return 0;
        return 1;
        
    }
};

//https://leetcode.com/problems/rectangle-overlap/