class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(auto x: stones)
        {
            q.push(x);
        }
        if(q.size()==1)return q.top();
        while(q.size()>1)
        {
            
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            if(abs(a-b)>0)
            {
                q.push(abs(a-b));
            } 
            if(q.empty())
            {
                q.push(0);
            }
        }
        return q.top();
    }
};
