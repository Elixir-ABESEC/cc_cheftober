// https://leetcode.com/problems/two-sum/
vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> m;
  vector<int> final;
  for (int i = 0; i < nums.size(); i++) {
    int complement = target - nums[i];
    if (m.find(complement) != m.end()) {
      final.push_back(m[complement]);
      final.push_back(i);
      return final;
    }
    m[nums[i]] = i;
  }
  return final;
}