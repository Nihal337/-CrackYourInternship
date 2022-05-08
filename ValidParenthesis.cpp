class Solution {
public:
    bool isValid(string s) {
        int n=s.size() ;
        stack<char>st ;
        if(n&1) return false ;
        
        //traverse the string 
        //if got open brace the push it on stack
        // else if got close brace check if it matches the current open brace
        // if yes the pop it else return false
        
        for(int i=0 ;i<n ;i++) {
       
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') 
                st.push(s[i]) ;
            else {
                    if(st.empty()) return false ;
                
                if(s[i]==')') {
                    if(st.top() !='(') return false ;
                    else st.pop() ;
                }
                if(s[i]=='}') {
                    if(st.top() !='{') return false ;
                    else st.pop() ; 
                }
                if(s[i]==']') {
                    if(st.top() != '[') return false ;
                    else st.pop() ;
                    
                    
                }
                
                
            }
        
        
        
        
        }
        return st.empty() ;
       
       
        
    }
};
