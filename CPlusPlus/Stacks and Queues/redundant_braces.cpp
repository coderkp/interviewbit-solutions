//We are promised a valid expression.
//We create a int stack and map open parentheses to 1 and the
//operators to 2.
//The logic is when we see a closing parentheses, there has to be
//an operator on the stack top. If there isn't, there is a redundant brace.
//We can say so confidently because whenever we see a closing parentheses, we pop
//the operator and the corresponding open parentheses.
int Solution::braces(string A) {
    stack<int> st;
    for(int i = 0; i <A.length(); i++) {
        //Push '2' for operators
        if(A[i] == '+' || A[i] == '-' || A[i] == '/' || A[i] == '*')
            st.push(2);
        //Push '1' for open parentheses
        else if(A[i] == '(')
            st.push(1);
        else if(A[i] == ')') {
            //For closing parentheses, pop if stack top is operator
            if(st.top() == 2) {
                st.pop();
                st.pop();
            }
            //if not we have a redundant parentheses, so return true. 
            else
                return 1;
                
        }
    }
    return 0;
}

