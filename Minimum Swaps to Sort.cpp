
#include <bits/stdc++.h>

using namespace std;
	int minSwaps(vector<int>&nums)
	{
	  
	 vector<pair<int,int>>v;
	 int n=nums.size();
	  for(int i=0;i<n;i++)
	  {
	      v.push_back({nums[i],i});
	  }
	    sort(v.begin(),v.end());
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	       if(v[i].second!=i)
	      {
	           cnt++;
	           swap(v[i],v[v[i].second]);
	           i--;
	       }
	       
	    }
	    return cnt;
	   
	}
int main()
{  
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<minSwaps(v);
    return 0;
}
