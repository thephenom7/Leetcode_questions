class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int len=s.length();
        int arr[len][len];
        for(int i=0;i<len;i++)
            arr[i][i]=1;
        for(int l=2;l<=len;l++)
        {
            for(int i=0;i<=len-l;i++)
            {
                int j=l+i-1;
                if(l==2 && s[i]==s[j])arr[i][j]=2;
                else if(s[i]==s[j])
                {
                    arr[i][j]=arr[i+1][j-1]+2;
                }
                else
                {
                    arr[i][j]=max(arr[i+1][j],arr[i][j-1]);
                }
            }
        }
        return arr[0][len-1];
        
        
    }
};
