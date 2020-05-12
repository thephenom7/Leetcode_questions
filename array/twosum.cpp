class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> record;

        for (auto i = 0; i < nums.size(); ++i) {
            auto item = record.find(target - nums[i]);
            if (item != record.end()) {
                return {item->second, i};
            }

            record[nums[i]] = i;
        }
        return{};
    }
};
