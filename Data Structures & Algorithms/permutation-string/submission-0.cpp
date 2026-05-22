class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        
        vector<int> vector1(26,0);
        vector<int> vector2(26,0);
        int left = 0;

        for(char c : s1) vector1[c-'a']++;

        for(int right = 0; right < s2.length(); right++){
            vector2[s2[right] - 'a']++;
            
            if(right >= s1.length()){
                vector2[s2[left] - 'a']--;
                left++;
            }
            
            int matches = 0;
            for(int i = 0; i < 26; i++){
                if(vector1[i] == vector2[i]){
                    matches++;
                }
            }

            if(matches == 26){
                return true;
            }
        }
        return false;
    }
};