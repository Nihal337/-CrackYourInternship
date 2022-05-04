class Solution {
public:
    
    // let y = sum[i] = sum upto ith index
    // check if y-k exist , if exist check  how many times y-k come
    // bcoz obv in between subarray sum of y and subarray sum of y-k 
    // there is subarray sum equals k
    // check the count of y-k 
    //  as no of times y-k occurs = no of subarray sum k
    
    int subarraySum(vector<int>& nums, int k) {
        
        // to keep track of count of y-k
        unordered_map<int,int>mp ;
        
        // to find sum of upto each index
         int sum = 0 ;
         int ans = 0 ;
          mp[0] = 1 ;
        int n = nums.size() ;
      
        for(int i=0 ;i<n ;i++) {
            
            sum += nums[i] ;
            int to_find = sum - k ;
            
            // check y-k exists 
            if(mp.count(to_find)) {
                
                // ans is Yes 
                // how many times  ;
                int cnt = mp[to_find] ;
                ans += cnt ;
            }
            
            // update the count of sum 
              mp[sum]++ ;
        }
        return ans ;
    }
};
