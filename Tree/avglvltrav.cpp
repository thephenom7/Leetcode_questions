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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode *>q;
        double sum=root->val;
        q.push(root);
        vector<double> res;
        int size;
        while(!q.empty())
        {
            res.push_back(sum);
            sum=0;
            size=q.size();
            while(size--)
            {
                if(q.front()->left)
                {
                    sum+=q.front()->left->val;
                    q.push(q.front()->left);
                }
                if(q.front()->right)
                {
                    sum+=q.front()->right->val;
                    q.push(q.front()->right);
                }
                q.pop();
            }
            cout<<sum<<endl;;
            sum/=q.size();
            
        }
        return res;
        
    }
};
