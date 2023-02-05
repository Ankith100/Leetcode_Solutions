class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<bool> check(n);
        string vowels = "aeiou";
        int i=0;
        for(auto &str:words)
        {
            if(vowels.find(str[0]) != string::npos && vowels.find(str[str.size()-1]) != string::npos)
                check[i]=1;
            i++;
        }
        vector<int> pre(n);
        pre[0]=check[0];
        for(int i=1;i<n;i++)
        {
            if(check[i])    pre[i]=pre[i-1]+1;
            else            pre[i]=pre[i-1];
        }
        vector<int> ans;
        for(auto &v:queries)
            ans.push_back(pre[v[1]]-pre[v[0]]+check[v[0]]);
        return ans;
    }
};
//Link : https://leetcode.com/problems/count-vowel-strings-in-ranges/description/