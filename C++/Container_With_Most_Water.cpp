class Solution {
public:
    int maxArea(vector<int>& height) {
        // Brute Force
        // int max_area = INT_MIN;
        // for(int i=0; i<height.size(); i++) {
        //     for(int j=i+1; j<height.size(); j++) {
        //         max_area = max(max_area, min(height[i],height[j])*(j-i));
        //     }
        // }
        // return max_area;
        
        // https://www.youtube.com/watch?v=TI3e-17YAlc
        // Greedy Approach
        int max_area = INT_MIN;
        int l = 0;
        int r = height.size()-1;
        for(int i=0; i<height.size(); i++) {
            int min_bar = min(height[l], height[r]);
            max_area = max(max_area, min_bar * (r-l));
            height[l] < height[r] ? l++ : r--;
            // if(height[l] < height[r]) {
            //     l++;
            // } else {
            //     r--;
            // }
        }
        return max_area;
    }
};
