class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr){
        int sum = 0, n = arr.size();
        for(int i=0;i<n;i++)
            sum += arr[i];
        if(sum%3 != 0)     return 0;
        sum /= 3;
        int cnt = 0, temp = 0;
        for(int i=0;i<n;i++){
            temp+=arr[i];
            if(sum==temp){
                cnt++;
                temp = 0;
            }
        }
        return cnt>=3;
    }
};


//Link : https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/description/