class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        
        if(s.length()%2)
            return false;
        
        for(char ch: s)
        {
            if(ch=='('||ch=='['||ch=='{')
                st.push(ch);
            else if(st.empty()||ch==')' && st.top()!='('||ch==']' && st.top()!='['||ch=='}' && st.top()!='{')
                return false;
            else st.pop();
        }
        return st.empty();
        
        
    }
};