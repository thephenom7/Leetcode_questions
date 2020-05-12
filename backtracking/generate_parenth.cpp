class Solution {
public:
    vector<string> vect;
    int l2,r2;
    void backtrack(string s,int l,int r)
    {
        if(l==0 && r==0)
        {
            cout<<s<<l<<r<<endl;
            vect.push_back(s);
            return;
        }
        else if(l==r)
        {
            l=l-1;
            s=s+'(';
            backtrack(s,l,r);
        }
        else if(l==0)
        {
            while(r)
            {
                s=s+')';
                r--;
            }
            cout<<s<<l<<r<<"while"<<endl;
            vect.push_back(s);
            return;
        }
        else
        {
            int l2=l;
            int r2=r;
            backtrack(s+"(",--l,r);
            backtrack(s+")",l2,--r2);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        backtrack("",n,n);
        return vect;
        
    }
};
