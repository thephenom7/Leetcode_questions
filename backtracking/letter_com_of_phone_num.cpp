class Solution {
public:
    void decode(string digits,string curr,int index,string mapping[],vector<string>&res)
    {
        if(index==digits.length())
        { res.push_back(curr);
         return;
        }
        string letters=mapping[digits[index]-'0'];
        for(int i=0;i<letters.length();i++)
        {
            decode(digits,curr.append(string(1,letters[i])),index+1,mapping,res);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)return{};
        string mapping[]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> res;
        decode(digits,"",0,mapping,res);
        return res;
        
        
    }
};
