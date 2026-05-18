class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        sort(nums.begin(),nums.end());
        int lseq = 1;
        int maxlseq = 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1] + 1){
                    lseq++;
                }
                else{
                    lseq = 1;
                }
                if(lseq>maxlseq){
                    maxlseq = lseq;
                }
            }
        }
        return max(maxlseq,lseq);
    }
};