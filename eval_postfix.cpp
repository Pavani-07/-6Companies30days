class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                
                int r2=st.top();
                st.pop();
                int r1=st.top();
                st.pop();
                switch(tokens[i][0]){
                    case '+':
                        st.push(r1+r2);
                        break;
                    case '-':
                        st.push(r1-r2);
                        break;
                    case '*':
                        st.push(r1*r2);
                        break;
                    case '/':
                        st.push(r1/r2);
                        break;
                }
                
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
