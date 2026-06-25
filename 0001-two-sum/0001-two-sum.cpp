class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            hm.insert({nums[i], i});

            auto it = hm.find(target - nums[i]);
            if (it != hm.end() && i != it->second) {
                ans.push_back(i);
                ans.push_back(it->second);
            }      
        }

        return ans;
    }
};