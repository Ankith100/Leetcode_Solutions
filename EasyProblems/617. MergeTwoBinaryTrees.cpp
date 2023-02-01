
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 == NULL && root2 == NULL)   return NULL;
        if(root1 && root2){
            root1->val+=root2->val;
            root1->left = mergeTrees(root1->left,root2->left);
            root1->right = mergeTrees(root1->right,root2->right);
            return root1;
        }
        if(root1 && root2==NULL)
        {
            root1->left = mergeTrees(root1->left,root2);
            root1->right = mergeTrees(root1->right,root2);
            return root1;
        }
        if(root1 == NULL && root2){
            root2->left = mergeTrees(NULL, root2->left);
            root2->right = mergeTrees(NULL, root2->right);
        }
        return root2;
    }
};