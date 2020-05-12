class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        unordered_map<int,int> hash;
        for(int i=0;i<s.length();i++)
        {
            hash[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++)
        {
            hash[t[i]-'a']--;
            if(hash[t[i]-'a']<0)
                return false;
        }
        return true;
    }
};
