class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> bracketmap = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for(char c : s){
            if(bracketmap.count(c)){
                if(st.empty() || st.top() != bracketmap[c]){
                    return false;
                }
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};