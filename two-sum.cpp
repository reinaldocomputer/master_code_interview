// https://leetcode.com/problems/two-sum/
// Success
// Details 
// Runtime: 19 ms, faster than 56.23% of C++ online submissions for Two Sum.
// Memory Usage: 11.9 MB, less than 13.50% of C++ online submissions for Two Sum.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> input;
        for(int i=0; i < nums.size();i++) input.insert(make_pair(nums[i], i));
        for(int i=0; i < nums.size(); i++){
            int secondNumber = target - nums[i];
            if(input.find(secondNumber) != input.end()){
                if(i != input[secondNumber])
                    return vector<int>{i, input[secondNumber]};
            }
        }
        return vector<int>{};
    }
};