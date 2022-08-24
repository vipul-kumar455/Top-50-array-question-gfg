#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
  
vector<int> solve(int n,int m,int a[],int b[])
{
    int cnt=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int temp=a[i];
        cnt=0;
        for(int j=0;j<m;j++)
        {
            if(temp>=b[j])
            {
                cnt++;
               
            } 
        }
       v.push_back(cnt);
    }
    return v;
    
}
    
};
// 13 25 13 1 22 13 6 16 16 3 16 30 3 6 3 14 15
int main() {
 int n,m;
 cin>>n>>m;
 int a[n],b[m];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  for(int i=0;i<m;i++)
  {
      cin>>b[i];
  }
  Solution ob;
  vector<int>v=ob.solve(n,m,a,b);
  for(int i=0;i<n;i++)
  {
      cout<<v[i]<<" ";
  }
  
return 0;
}
