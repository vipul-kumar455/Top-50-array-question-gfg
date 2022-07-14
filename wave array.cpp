
#include <bits/stdc++.h>

using namespace std;
class solution
{
  public:
  void count(int n,vector<int>&a)
  {
      for(int i=0;i<n;i+=2)
      {
          if(a[i]<=a[i+1])
          {
              swap(a[i],a[i+1]);
          }
      }
  }
};
int main()
{
    int n=5;
    vector<int>a={1,2,3,4,5};
    solution sb;
    sb.count(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}