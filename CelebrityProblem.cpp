class Solution {
public:
    // ans mera right side pe depend krra isliye right se start kiya iteration
    // TC  : O(N) SC : O(N) + O(N)
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int>mp ;// (element,its nge)
        vector<int>ans(nums1.size(),-1)  ; //  my ans vector
        stack<int>st ;
        int n= nums2.size() ;
        for(int i=n-1 ;i>=0 ;i--) {
            
            int currno = nums2[i] ;
            //  i want my st.top() to be the best answer i.e nge for my curr index
            // pop it until i get what i get my nge in st.top() if empty that
            means not found any nge.
            while(!st.empty() and st.top()<currno) {
                   st.pop() ;
            }
             
            // now my top must have my desired nge 
            // so save it in map
            if(!st.empty()) {
                mp[currno] = st.top() ;
            }
            st.push(currno) ;
            
        }
        for(int i=0 ;i<nums1.size() ;i++) {
           
            int element = nums1[i] ;
            if(mp.count(element)) {
             
                int nge = mp[element] ;
                ans[i] = nge ;
            }
        }
     return ans ;   
    }
};
