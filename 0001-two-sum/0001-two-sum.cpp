class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;

        for (int i = 0; i < nums.size(); i++) {
            auto it = hm.find(target - nums[i]);
            if (it != hm.end()) {
                return {i, it->second};
            }   

            hm.insert({nums[i], i});   
        }

        return {};
    }
};