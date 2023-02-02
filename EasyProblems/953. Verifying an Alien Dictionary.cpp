class Solution {
public:
    bool check(string &w1, string &w2, int char_map[])
    {
        for(int i=0;i<min(w1.size(),w2.size());i++)
        {
            if(char_map[w1[i]-'a'] == char_map[w2[i]-'a'])
                continue;
            else if(char_map[w1[i]-'a'] > char_map[w2[i]-'a'])
                return 1;
            else  
                return 0;

        }
        return w1.size()>w2.size() ? 1 : 0;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        int char_map[26];
        for(int i=0;i<order.size();i++)
            char_map[order[i]-'a'] = i;//mapping alphabets to order
        for(int i=1;i<words.size();i++)
            if(check(words[i-1],words[i],char_map))// if there is        //reverse in order returns 0
                return 0;
        return 1;
    }

};