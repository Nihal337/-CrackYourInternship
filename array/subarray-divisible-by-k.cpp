class Solution {
public: 
    // TC :O(N)  SC :O(N)
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp ;
        
        mp[0] = 1 ;
        int n = nums.size() ;
        int sum = 0 ;
        int rem = 0 ;
        int ans = 0 ;
        for(int i=0 ;i<n ;i++) {
            
            sum += nums[i] ;
            rem = sum%k ;
            
            if(rem<0)  rem += k ;    
                    
            mp[rem]++ ;   
        }
        
        
        for(auto x:mp) {
            
            int cnt = x.second ;
            ans += cnt*(cnt-1)/2 ;
        }
        return ans ;
    }
};
