class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // using unordered_set to insert only unique elements.
        unordered_set<int> seen(nums.begin(),nums.end());

        // by comparing the length of both we can simply find the answer
        return seen.size() < nums.size();
    }
};