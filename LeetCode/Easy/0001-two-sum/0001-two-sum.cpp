class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        vector<int> answer(2);

        for(i = 0; i < n - 1; i++) {
            for(j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    answer[0] = i;
                    answer[1] = j;
                }
            }
        }

        return answer;
    }
};