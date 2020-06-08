class Solution {
public:
    int myAtoi(string str) {
        int index=str.find_first_not_of(' ');
        stack<int>st;
        long res=0,i=0;
        int flag=0;
        if(index==string::npos)return 0;
        if((str[index]-'0'>=0 && str[index]-'0'<=9) || str[index]=='-' ||str[index]=='+')
        {
            if(str[index]=='-')
            {
                flag=1;
                index++;
            }
            else if(str[index]=='+')index++;
            while(str[index]-'0'>=0 && str[index]-'0'<=9 && index<str.length())
            {
                st.push(str[index]-'0');
                index++;
            }
            while(!st.empty())
            { 
                if(flag==1)
                {
                if(res-(st.top())*pow(10,i) < INT_MIN)return INT_MIN;
                res=res-(st.top())*pow(10,i);
                }
                else
                {
                if(res+ (st.top())*pow(10,i) > INT_MAX)return INT_MAX;                    
                res=res+(st.top())*pow(10,i);
                }
                i++;
                st.pop();
                
            }

            return res;
        }
        else
        {
            return 0;
        }
        
        
    }
};
