class Solution {
public:
    int minimum(int a,int b,int c)
    {
        if(a<c && a<b)return a;
        else if(b<c)return b;
        else return c;
    }
    int countSquares(vector<vector<int>>& matrix) {
        int table[matrix.size()][matrix[0].size()];
        for(int i=0;i<matrix.size();i++)
            table[i][0]=matrix[i][0];
        for(int j=0;j<matrix[0].size();j++)
            table[0][j]=matrix[0][j];
        cout<<"good";
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==1)
                {
                    table[i][j]=minimum(table[i-1][j],table[i-1][j-1],table[i][j-1])+1;
                }
                else
                {
                    table[i][j]=matrix[i][j];
                }
            }
        }
        int maxval=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                maxval+=table[i][j];
            }
            cout<<endl;
        }
        return maxval;
        
        
        
    }
};
