class Solution {
public:
    // 2nd approach : using DNF : dutch national....
    // or u can say using three pointers 
    void sortColors(vector<int>& nums) {
        
        int n = nums.size() ;
        if(n==1) return ;
        int left = 0 ,mid = 0, right = n-1 ;
          
        while(mid<=right) {
            
            if(nums[mid]==0) {
                swap(nums[mid],nums[left])  ;
                left++ ;
                 mid++ ;
            }
            else if(nums[mid]==2) {
                swap(nums[mid],nums[right]) ;
                right-- ;
               
            }
            else mid++ ;
        }
    }
};
