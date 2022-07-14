class Solution
{
    public:
    int peakElement(int a[], int n)
    {
       int i=1;
       while(i<n && a[i-1]<a[i])
       {
           i++;
       }
       return i-1;
    }
};