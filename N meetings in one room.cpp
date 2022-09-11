#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
   static bool cmp(pair<int,int>a,pair<int,int>b)
   {
       return a.second<b.second;
   }
    int maxMeetings(int start[], int end[], int n)
    {
       std::vector<pair<int,int>>v ;
       for(int i=0;i<n;i++)
       {
           pair<int,int>p=make_pair(start[i],end[i]);
           v.push_back(p);
       }
       sort(v.begin(),v.end(),cmp);
       int cnt=1;
       int ans=v[0].second;
       for(int i=1;i<n;i++)
       {
          if(v[i].first>ans)
          {
              cnt++;
              ans=v[i].second;
          }
       }
       return cnt;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
