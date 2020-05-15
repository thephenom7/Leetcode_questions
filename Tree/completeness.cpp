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
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode *>q;
        if(!root)return {};
        q.push(root);
        int size;
        bool lack=false;
        while(!q.empty())
        {
            size=q.size();
            while(size!=0)
            {
                if(q.front()->left)
                {q.push(q.front()->left);
                 if(lack)return false;
                }
                else
                {
                    lack=true;
                }
                if(q.front()->right)
                {q.push(q.front()->right);
                 if(lack)return false;
                }
                else
                {
                    lack=true;
                }
                q.pop();
                size--;   
            }
        }
        return true;
    }
};
