class Solution {
public:
int res;
    vector<int> ans(TreeNode *root)
    {
        if(root==NULL)  return {0,0};
        if(root->left==NULL && root->right==NULL)  return {root->val,0};
        vector<int> l,t,r;
        l = ans(root->left);
        r = ans(root->right);
        t.push_back(max(root->val+l[1]+r[1],l[0]+r[0]));
        t.push_back(l[0]+r[0]);
        return t;
    }
    int rob(TreeNode* root) {
        vector<int> v = ans(root);
        return v[0];
    }
};
// Link : https://leetcode.com/problems/house-robber-iii/description/