class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxwater = 0;
        int volume = 0;
        int minheight = 0;
        while(left<right){
            int width = right - left;
            minheight = min(height[left],height[right]);
            volume = (width * minheight);
            maxwater = max(volume,maxwater);

            if(height[left]<height[right]){
                left++;
            }
            else if(height[right]<height[left]){
                right--;
            }
            else{
                right--;
            }
        }
        return maxwater;
    }
};