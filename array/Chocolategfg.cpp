// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
       sort(a.begin(),a.end()) ;
       if(m==1) return 0 ;
      long long int mini = INT_MAX ;
      int i=0,j=m-1;
      while(j<=n-1) {
          
          mini = min(mini,abs(a[i]-a[j])) ;
          i++ ;
          j++ ;
      }
      return mini ;
    }
};
