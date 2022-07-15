bool subArrayExists(int arr[], int n)
    {
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0;i<n;i++)
{
    sum+=arr[i];
    if(sum==0 || mp[sum] || arr[i]==0)
    {
        return 1;
    }
    mp[sum]++;
}
return 0;
    }