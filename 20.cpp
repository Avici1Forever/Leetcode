class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int flag=1;
        for(int i=0;i<s.size();i++){
            switch (s[i]) {
                case '(':
                    stack.push(s[i]);
                    break;
                case '[':
                    stack.push(s[i]);
                    break;
                case '{':
                    stack.push(s[i]);
                    break;
                case ')':
                    if(stack.size()==0){
                        flag=0;
                        break;
                    }
                    if(stack.top()!='('){
                        flag=0;
                    }
                    else{
                        stack.pop();
                    }
                    break;
                case ']':
                    if(stack.size()==0){
                        flag=0;
                        break;
                    }
                    if(stack.top()!='['){
                        flag=0;
                    }
                    else{
                        stack.pop();
                    }
                    break;
                case '}':
                    if(stack.size()==0){
                        flag=0;
                        break;
                    }
                    if(stack.top()!='{'){
                        flag=0;
                    }
                    else{
                        stack.pop();
                    }
                    break;
            }
            if(flag==0) break;
        }
        if(flag==0 or stack.size()!=0)
            return false;
        else
            return true;
    }
};