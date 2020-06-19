/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {

        if(!root)return 0;
        queue<Node *>q;
        q.push(root);
        int size,lvl=0;
        Node *temp;
        while(!q.empty())
        {
            lvl++;
            size=q.size();
            int i=0; 
            while(size--)
            {
                if(i!=0)
                {
                    temp->next=q.front();
                }
                if(q.front()->left)
                {
                    q.push(q.front()->left);
                }
                if(q.front()->right)
                {
                    q.push(q.front()->right);
                }
                temp=q.front();
                q.pop();
                i++;
                
            } 
            temp->next=nullptr;
        }
        return root;
        
    }
};
