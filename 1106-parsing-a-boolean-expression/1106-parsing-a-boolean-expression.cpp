class Solution {
public:
    char solveOp(vector<char> &values, char op){
        if(op == '!'){
             return values[0] == 't' ? 'f' : 't';
        }
        if(op == '&'){
            //check for any value in vector is false then return false 
            for(char &ch : values)
            {
                if(ch == 'f') return 'f';
            }
            return 't';
        }
        if(op == '|'){
            //check for any value in vector is true then return true
            for(char &ch : values){
                if(ch == 't') return 't';
            }

            return 'f';
        }
        return 't';
    }
    bool parseBoolExpr(string expression) {
        int n = expression.length();

        stack<char> st;
        for(int i=0;i<n;i++){
            if(expression[i] == ',') continue;
            if(expression[i] == ')')
            {
                vector<char> values;
                while(st.top() !='('){
                    values.push_back(st.top());
                    st.pop();
                }
                st.pop(); // Remove '('
                char op = st.top(); //!, &, |
                st.pop(); //Remove operator

                st.push(solveOp(values, op));
            }
            else {
                st.push(expression[i]);
            }
        }
        return st.top() == 't' ? true : false;
    }
};