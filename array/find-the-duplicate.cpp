
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     
        int fast = nums[nums[0]] ;
        int slow  = nums[0] ;
        
        while(slow != fast) {
            
            slow = nums[slow] ;
            fast = nums[nums[fast]] ;
        }
        
        // now my fast and slow is in a cycle 
        
        // now lets find the start of cycle 
        // start of cycle = duplicate
        fast = 0 ;
        while(fast != slow) {
            fast = nums[fast] ;
            slow = nums[slow] ;
        }
        return fast ;

    }
};
