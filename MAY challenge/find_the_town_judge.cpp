class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int n=N;
        int sum;
        set <int> s;
        for(int i=0;i<trust.size();i++)
        {
              s.insert(trust[i][0]); 
        }
        sum=accumulate(s.begin(),s.end(),0);
        int asum=(n*(n+1))/2;
        int diff=asum-sum;
        int count=0;
        for(int i=0;i<trust.size();i++)
        {
            if(trust[i][1]==diff)
            {
                count++;
            }
        }
        if(count==n-1)
            return diff;
        else
            return -1;
    }
};
