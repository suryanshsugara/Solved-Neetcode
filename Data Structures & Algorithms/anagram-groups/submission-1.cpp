class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> group;
        for(string s : strs){
            vector<int> count(26,0);
            for(char c : s){
                count[c - 'a']++;
            }
            group[count].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto const& [Key, Val] : group){
            ans.push_back(Val);
        }
        return ans;
    }
};
