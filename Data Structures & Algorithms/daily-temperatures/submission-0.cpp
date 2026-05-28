class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(),0);
        stack<int> st;
        for(int i = 0; i<temperatures.size(); i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int read = st.top();
                st.pop();
                int w = i - read;
                result[read] = w;
            }
            st.push(i);    
        }
        return result;
    }
};