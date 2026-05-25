class Solution {
public:
    string minWindow(string s, string t) {

        if(t.length() > s.length()) return "";

        unordered_map<char,int> target;
        unordered_map<char, int> window;

        for(char c : t) target[c]++;

        int left = 0;
        int newleftstart = -1;
        int minlen = INT_MAX;
        int need = target.size();
        int have = 0;

        for(int right = 0; right < s.length(); right++){
            char rchar = s[right];
            window[rchar]++;

            if(target.count(rchar) && window[rchar] == target[rchar]){
                have++;
            }

            while(have == need){
                int width = right - left + 1;
                
                if(width < minlen){
                    minlen = width;
                    newleftstart = left;
                }
                char lchar = s[left];
                window[lchar]--;

                if(target.count(lchar) && window[lchar] < target[lchar]){
                    have--;
                }

                left++;
            }
        }
        return (newleftstart == -1) ? "" : s.substr(newleftstart, minlen);

    }
};
