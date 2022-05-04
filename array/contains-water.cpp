class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxarea = 0 ;
       int l=0,r = height.size()-1 ;
        while(l<r) {
            int area = abs(r-l)*min(height[l],height[r]) ;
            maxarea = max(maxarea,area) ;
            if(height[r]<height[l])  r-- ;
            else l++ ;
        }
        return maxarea ;
    }
};
