class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

        vector<int> ans;
        if(root==NULL)  return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(q.empty()!=1)
        {
            int s = q.size();
            TreeNode *temp;
            while(s--)
            {
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                temp = q.front();
                q.pop();
            }
            ans.push_back(temp->val);
        }
        return ans;
    }
};
// Link : https://leetcode.com/problems/binary-tree-right-side-view/submissions/892480821/