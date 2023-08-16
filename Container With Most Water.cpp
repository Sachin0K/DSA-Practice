class Solution {
public:
    int maxArea(vector<int>& height) {
       int left = 0; 
       int right = height.size()-1;
       int maxiArea = 0;

        while(left < right){
            int currentArea = min(height[left], height[right]) * (right-left);
            maxiArea = max(currentArea, maxiArea);

            if(height[left]<height[right]){
                left++;
            } else right--;
        }

    return maxiArea;

    }
};