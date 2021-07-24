class Solution {
public:
    vector<int> twoSum(vector<int>& nums, target) {
        vector<int> result;
        int numsSize = nums.size();
        map<int, int> m;

        for(int i = 0; i < numsSize; i++) {
            m[nums[i]] = i;
        }

        for(int i = 0; i < numsSize; i++) {
            int subTarget = target - nums[i];

            auto targetIndex = m.find(subTarget);
            if(targetIndex != m.end() && m[subTarget] != i) {
                result = {i, m[subTarget]};
                return result;
            }
        }

        return result;
    }
};
