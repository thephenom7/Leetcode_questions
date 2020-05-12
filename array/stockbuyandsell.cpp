class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int pro=0;
        for(auto x:prices)
        {
            if(x<min)
                min=x;
            else
            {
                if((x-min)>pro)
                {
                    pro=x-min;
                }
                    
            }
        }
        return pro;
        
    }
};
