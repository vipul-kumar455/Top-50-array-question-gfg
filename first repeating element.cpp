
#include <bits/stdc++.h>

using namespace std;
class solution
{
  public:
 int count(int n,vector<int>&a)
 {
     
     //unordered_map<int,int>mp;
     int mp[1000000]={0};
     int temp;
     for(int i=0;i<n;i++)
     {
     mp[a[i]]++;
     
     }
    for(int i=0;i<n;i++)
     {
         if(mp[a[i]]>1)
         return i+1;
     }
     return -1;
    
     
     
 }
};
int main()
{
    int n=7;
    vector<int>a={1, 5, 3, 4, 3, 5, 6};
    solution sb;
    cout<<sb.count(n,a);
   
   
    return 0;
}