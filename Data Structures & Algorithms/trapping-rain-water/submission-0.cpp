class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n);
        vector<int> right(n);

        int water = 0;
        int leftmax = 0;
        int rightmax = 0;

        for(int i = 0;i<height.size();i++){
            leftmax = max(leftmax,height[i]);
            left[i] = leftmax;
        }
        for(int j = height.size()-1;j>=0;j--){
            rightmax = max(rightmax,height[j]);
            right[j] = rightmax;
        }

        for(int i = 0; i<height.size();i++){
            water += min(left[i],right[i]) - height[i];
        }
        return water;
    }
};