
#include<bits/stdc++.h>  
using namespace std;
int main()
{
    int n=7;
    int a[n]={12, 1, 2, 3, 0, 11, 4};
    vector<int>v;
    int cnt=0;
    for(int i=0;i<n;i++)
    {cnt=0;
        for(int j=i+1;j<n;j++)
        {
        
      if(a[i]>a[j])
      {
          cnt++;
      }
      
        }
         v.push_back(cnt);
     
    }
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}