// Greedy Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;                // {number: index}
        for(int i=0; i<nums.size(); i++) {
            int res = target - nums[i];
            // if the second number is found, return
            // https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/
            if(map.find(res) != map.end()) {        // O(1)
                return vector<int> {map[res], i};;
            }
            // else, put it in the map
            map[nums[i]] = i;
        }
        return {};
    }
};
