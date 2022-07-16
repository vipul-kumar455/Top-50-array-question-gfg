#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=8;
    int a[n]={3, 4, 1, 9, 56, 7, 9, 12};
    int m=5;
    sort(a,a+n);
    int ans=INT_MAX;
    for(int i=0;i+m-1<n;i++)
    {
        ans=min(ans,(a[i+m-1]-a[i]));
    }
    cout<<ans;

    return 0;
}