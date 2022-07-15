class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
       int n=arr.size();
       int mi=INT_MAX;
       int sum=0;
      
       int i=0;
       int j=n-1;
        int f=i,s=j;
        while(i<j)
        {
            sum=arr[i]+arr[j];
            if(abs(arr[i]+arr[j]-x)<mi)
            {
               mi=abs(arr[i]+arr[j]-x);
               f=i;
               s=j;
            }
            if(sum>x)
            {
                j--;
            }
            else
            {
                i++;
            }
            
        }
        return {arr[f],arr[s]};
    }
};
