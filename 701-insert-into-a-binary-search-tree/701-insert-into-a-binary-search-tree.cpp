/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val)
    {
            TreeNode* newn = new TreeNode;
            newn->left = NULL;
            newn->right = NULL;
            newn->val = val;
            if(root == NULL)
            {
                root = newn;
            }
        else
        {
            TreeNode* temp = root;
            while(1)
            {
                if(val < (temp->val))
                {
                    if((temp->left) == NULL)
                    {
                        temp->left = newn;
                        break;
                    }
                    temp = temp->left;
                }
                  if(val > (temp->val))
                {
                    if((temp->right) == NULL)
                    {
                        temp->right = newn;
                        break;
                    }
                    temp = temp->right;
                }
            }
        }
        return root;
    }
};