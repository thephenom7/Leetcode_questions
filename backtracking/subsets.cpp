class Solution {
public:
    void generatesubset(vector<int>nums,vector<int>vect,vector<vector<int>>&res,int index)
    {
        res.push_back(vect);
        for(int i=index;i<nums.size();i++)
        {
            vect.push_back(nums[i]);
            generatesubset(nums,vect,res,index+1);
            vect.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> vect;
        generatesubset(nums,vect,res,0);
        return res;
        
    }
};
