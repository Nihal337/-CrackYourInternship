class Solution {
public:
    bool dfs(vector<vector<char>>&board,int i,int j,int count, string word) {
        
        // base case 
        if(count == word.size()) return true ; 
            
        // check for out of bound cases
       if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[count])
           return false ;
        
        // store the curr char at temp
        int temp = board[i][j] ;
        // make it '*' so that we do not revisit it 
        board[i][j] = '*' ;
        
        // go to all possible neighbours return true if found
        bool found = dfs(board,i+1,j,count+1,word) || dfs(board,i-1,j,count+1,word) || dfs(board,i,j+1,count+1,word) || dfs(board,i,j-1,count+1,word) ;
    
    
    // backtrack
    board[i][j] = temp ;
    return found ;
    
    }  
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size() ;
        int m = board[0].size() ;
        for(int i=0 ;i<n ;i++) 
            for(int j=0 ;j<m ;j++)
                if(board[i][j]==word[0] and dfs(board,i,j,0,word))
                    return true ;
            return false ;
        
        
    }
};
