

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int minimumDays(int s, int n, int m){
        // code here
        int s1=s/7;
        int to=s-s1;
        int ans=0;
        
        if(s*m%n==0)
        ans=(s*m)/n;
        else
       ans=((s*m)/n)+1;
       if(ans<=to)
       return ans;
       else
       return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends
