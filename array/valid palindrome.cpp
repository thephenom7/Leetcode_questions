class Solution {
public:
    bool isPalindrome(string s) {
if(s==" ")return true;
string ns,nns;
for(int i=0;i<s.length();i++)
{
    if(isalnum(s[i])){
                if(isupper(s[i]))
                {
                    ns.push_back(tolower(s[i]));
                }
                else
                {
                    ns.push_back(s[i]);
                }
    }
}
nns=ns;
reverse(ns.begin(),ns.end());
if(nns.compare(ns)==0)
    return true;
else
    return false;
        
    }
};
