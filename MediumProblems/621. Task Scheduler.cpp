class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> mp;
        int maxi=0;
        for(auto i:tasks)
        {
            mp[i]++;
            maxi = max(maxi,mp[i]);
        }
        int ans = (maxi-1)*(n+1);//To fill all the idle slots and max frequency char except one max_char
        for(auto it:mp)
            if(it.second == maxi)
                ans++;//one will be placed at the last position and others are filled in idle slots 
    return max(ans,(int)tasks.size());      
    }
};