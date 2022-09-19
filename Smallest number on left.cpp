
#include <bits/stdc++.h>

using namespace std;
 vector<int>solve(int a[],int n)
 {
     vector<int>v;
      stack<int>s;
      s.push(-1);
      for(int i=0;i<n;i++)
      {
      while(s.top()!=-1 && s.top()>=a[i])
      
          s.pop();
      v.push_back(s.top());
      s.push(a[i]);
      }
      return v;
 }
int main()
{
    int n;
    cin>>n;
     int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      vector<int>v=solve(a,n);
   for(auto i:v)
   {
       cout<<i<<" ";
   }

    return 0;
}
