 //{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int c[], int n, int k)
    {
        // Write Your Code here
        sort(c,c+n);
        int free=n-1;
        int mini=0;
        int buy=0;
        while(buy<=free)
        {
            mini+=c[buy];
            buy++;
            free-=k;
        }
        int maxi=0;
        free=0;
        buy=n-1;
        while(buy>=free)
        {
            maxi+=c[buy];
            buy--;
            free+=k;
        }
        vector<int>v;
        v.push_back(mini);
        v.push_back(maxi);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
