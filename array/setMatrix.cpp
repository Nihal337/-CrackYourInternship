class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // TC : O(N*2) , SC : O(1)(constant space)
        // same as previous method 
        // but here we will keep track of all zeros usning first row and first col
        
        int n = matrix.size() ;
        int m = matrix[0].size() ;
      // keep variable to check is there any zero in 1st row and col
        int x = 1 ; // first row 
        int y=  1 ; // first col
        
        // check in 1st row
        for(int j=0 ;j<m ;j++) {
           if(matrix[0][j]==0) {
                x = 0 ;
               break ;
           }
        }
        // check in 1st col
        for(int i=0 ;i<n ;i++) {
            if(matrix[i][0]==0) {
                y = 0 ;
                break ;
            }
        }
        
        // so lets now keep track of zeros in (n-1)*(m-1) submatrices
        for(int i=1 ;i<n ;i++) {
             for(int j = 1 ;j<m ;j++) {
                    if(matrix[i][j]==0) {
                        matrix[i][0] = 0 ;
                        matrix[0][j] = 0 ;
                    }
             }
        }
    // Now will traverse through first row and if found zero i will make that 
        //  whole particular col zero
        for(int j=1 ;j<m ;j++) {
             if(matrix[0][j]==0) {
                 for(int i=0 ;i<n ;i++) {
                     matrix[i][j]=0 ;
                 }
             }
        }
        // Now  will traverse through first col and if found any zero i will make
        // that whole particular row zero
        for(int i=1 ;i<n ;i++) {
            if(matrix[i][0]==0) {
                for(int j = 1 ;j<m ;j++) {
                        matrix[i][j] = 0 ;
                }
            }
        }
        
        // now if found zero in first row i.e x=0 then make whole 
        // first row zero
        if(x==0) {
            for(int j =0 ;j<m ;j++) matrix[0][j] = 0 ;
        }
        // similarly if found zero in first col i.e y=0 then make whole
        // first col zero
        if(y==0) {
           for(int i=0 ;i<n ;i++) matrix[i][0] = 0 ;
        }
    
       
        
    }
};
