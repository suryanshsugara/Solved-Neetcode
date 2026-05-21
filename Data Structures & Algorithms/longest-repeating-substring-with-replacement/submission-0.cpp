class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int res = 0;
        int l = 0;
        int maxw = 0;
        for(int r = 0; r<s.length(); r++){
            count[s[r]]++;
            maxw = max(maxw, count[s[r]]);
            
            while(r-l+1 - maxw > k){
                count[s[l]]--;
                l++;
            }
        res = max(res, r-l+1);
        }
        return res;
    }
};