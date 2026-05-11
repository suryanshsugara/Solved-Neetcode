class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);
        int rightprod = 1;
        int leftprod = 1;
        for(int j = 0; j < n; j++){
            output[j] = leftprod;
            leftprod *= nums[j];
        }
        for(int k = n - 1; k >= 0; k--){
            output[k] *= rightprod;
            rightprod *= nums[k];
        }
        return output;
    }
};
