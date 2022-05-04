class Solution {
public:
     // range [1,n] that means we can do some manipulation
        // with indices.
        // so  that means all values - 1 will lie in the range 
        // of indices i.e 0 to n-1
        
        // so if we take each arr[i]-1 as index and mark the
        // corresponding values as -ve .
        // so the duplicates - 1 will point to same index.
        // if we came across that index 2nd time then its
        // corresponding value will be -ve and then we will store
        // it in our ans array.
    
    vector<int> findDuplicates(vector<int>& nums) {
        
      vector<int>ans ;
        int n = nums.size() ;
        for(int i=0 ;i<n ;i++) {
         
         if(nums[abs(nums[i])-1]<0) ans.push_back(abs(nums[i])) ;
         
          int index = abs(nums[i]) - 1 ;
            // mark the guy of that index -ve
            nums[index] *= -1 ;
        
        }
        return ans ;
    }  
};
