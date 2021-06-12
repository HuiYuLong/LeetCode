// DP Solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int length = nums.size();
        int sum_matrix[length], max_num;
        max_num = sum_matrix[0] = nums[0];
        
        for(int i=1; i<length; i++) {
            // https://www.w3schools.com/cpp/cpp_conditions_shorthand.asp
            // condition ? variable : variable
            sum_matrix[i] = nums[i] + (sum_matrix[i-1] > 0 ? sum_matrix[i-1] : 0);
            max_num = sum_matrix[i] > max_num ? sum_matrix[i] : max_num;
        }
     
    return max_num;
    }
};
