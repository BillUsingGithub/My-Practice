class Solution {
public:
	vector<int> twoSum(vector<int>& nums, target) {
		vector<int> result;
		int numsSize = nums.size();

		for(int i = 0; i < numsSize; i++) {
			int subTarget = target - nums[i];

			auto targetIndex = find(nums.begin()+i+1, nums.end(), subTarget);
			if(targetIndex != nums.end()) {
				result = {i, targetIndex-nums.begin()};
				return result;
			}
		}

		return result;
	}
};
