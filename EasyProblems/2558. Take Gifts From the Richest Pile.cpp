class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        map<int,int,greater<int>> mp;
        long long ans=0,sum=0;
        for(auto i:gifts)
        {
            mp[i]++;
            sum+=i;
        }
        while(k--)
        {
            auto it = mp.begin();
            int temp = sqrt(it->first);
            ans += it->first - temp;
            mp[temp]++;
            if(it->second == 1)
                mp.erase(it->first);
            else
                it->second--;
        }
        return sum-ans;
    }
};