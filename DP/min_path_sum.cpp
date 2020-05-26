class Solution {
public:
    int minPathSum(vector<vector<int>>& a) {
        int n = a.size();
        if(n == 0){
            return 0;
        }
        int m = a[0].size();
        if(m == 0){
            return 0;
        }
        vector<vector<int>> memo(n, vector<int> (m, -1)); //intialize n * m vector with -1
        int ans = solve(a, memo, n-1, m-1);
        return ans;
    }
    int solve(vector<vector<int>> &a, vector<vector<int>> &memo, int n, int m) 
    {
        if(n < 0 || m < 0){
            return INT_MAX;
        }
        if(n == 0 && m == 0){
            return a[n][m];
        }
        if(memo[n][m] != -1){
            return memo[n][m];
        
        }
        
        memo[n][m] = a[n][m] + min(solve(a, memo, n-1, m), solve(a, memo, n, m-1));
        return memo[n][m];
    }
};
