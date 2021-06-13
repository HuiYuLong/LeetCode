class Solution {
public:
    // https://books.halfrost.com/leetcode/ChapterFour/0001~0099/0015.3Sum/
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i=0; i<nums.size(); i++) {
            int start = 0;
            int end = nums.size()-1;
            if(i > 1 && nums[i] == nums[i-1]) { start = i-1; }
            while(start < i && end > i) {
                // Check duplicates from left
                if(start > 0 && nums[start] == nums[start-1]) {
                    start++;
                    continue;
                }
                // Check duplicates from right
                if(end < nums.size()-1 && nums[end] == nums[end+1]) {
                    end--;
                    continue;
                }
                int sums = nums[start] + nums[end] + nums[i];
                if(sums == 0) {
                    result.push_back({nums[start], nums[i], nums[end]});
                    start++;
                    end--;
                } else if (sums > 0) {
                    end--;
                } else {
                    start++;
                }
            }
        }
        return result;
    }
};
