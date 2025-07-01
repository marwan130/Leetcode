class Solution {
public:
    bool isValid(string s) {
        stack<char>par;
        for(char c : s){
            if(c == '{' || c == '[' || c== '('){
                par.push(c);
            }
            else if((c =='}' || c == ']' || c == ')') && par.empty()){
                return false;

            }
            else if((c == '}' && par.top() == '{') || c == ']' && par.top() == '[' || c == ')' && par.top() == '(' ){
                par.pop();
            }
            else{
                return false;
            }
        }
        if(!par.empty()){
            return false;
        }
        return true;
        }

};