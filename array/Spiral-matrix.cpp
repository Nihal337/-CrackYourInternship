class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m= matrix.size() ;
        int n= matrix[0].size() ;
        vector<int>arr ;
        
        int startrow =0 ;
        int endrow = m-1 ;
        int startcol = 0 ;
        int endcol = n-1 ;
                
        while(startcol<=endcol and startrow <= endrow) {
            
        // startrow 
            for(int col=startcol ;col<=endcol ;col++) {
                   arr.push_back(matrix[startrow][col]) ;
            }            
            
            // endcol
            for(int row=startrow+1 ;row<=endrow ;row++) {
                arr.push_back(matrix[row][endcol]) ;
            }
            
            // endrow
            for(int col=endcol-1 ;col>=startcol ; col--) {
                      if(startrow==endrow) break ;
                  arr.push_back(matrix[endrow][col]);
            }
            
            // startcol
            for(int row = endrow-1 ;row>startrow ; row--) {
                if(startcol==endcol) break ;
                arr.push_back(matrix[row][startcol]) ;
            }
            
            startrow++ ;
            endrow-- ;
            startcol++ ;
            endcol-- ;
        

        
        }
        return arr ;
    }
};
