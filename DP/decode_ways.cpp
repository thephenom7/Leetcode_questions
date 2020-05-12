class Solution {
public:
    int numDecodings(string s) {
        if(s.size()==0) return 0;
        if(s.size()==1 && s[0]=='0') return false;
        vector<int> dp(s.size()+1);
        dp[s.size()-1]=s[s.size()-1]=='0' ? 0 : 1;
        dp[s.size()]=1;
        string t;
        for(int i=s.size()-2;i>=0;i--){
            t.clear();
            t.push_back(s[i]);
            t.push_back(s[i+1]);
            if(s[i]=='0'){
                dp[i]=0;
            }
            else if(stoi(t)<=26){
                dp[i]=dp[i+1]+dp[i+2];
            }
            else{
                dp[i]=dp[i+1];
            }
        }
        return dp[0];
    }
};
