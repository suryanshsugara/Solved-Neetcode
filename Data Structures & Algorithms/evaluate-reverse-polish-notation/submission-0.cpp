class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int top = 0;
        for(const string& s : tokens){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                top--;
                int b = stoi(tokens[top]);
                top--;
                int a = stoi(tokens[top]);

                int res = 0;
                if(s == "+") res = a+b;
                else if(s == "-") res = a-b;
                else if(s == "*") res = a*b;
                else if(s == "/") res = a/b;
                tokens[top] = to_string(res);
                top++;
            }else{
                tokens[top] = s;
                top++;
            }
        }
        return stoi(tokens[0]);
    }
};