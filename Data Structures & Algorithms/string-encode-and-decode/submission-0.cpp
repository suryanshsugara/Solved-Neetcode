class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(string s : strs){
            int len = s.length();
            result += to_string(len) + '#' + s;
        }
        return result;
    }   

    vector<string> decode(string result) {
        vector<string> decoded_list;
        int i = 0;
        while(i < result.size()){
            int j = result.find('#', i);
            int len = stoi(result.substr(i, j-i));
            i = j+1;
            decoded_list.push_back(result.substr(i, len));
            i += len;
        }
        return decoded_list;
    }
};
