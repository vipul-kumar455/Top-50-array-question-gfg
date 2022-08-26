class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> v1,v2;
    for(int i=0 ;i<n ;i++)
    {
        if(arr[i]>=0)
        v1.push_back(arr[i]);
        else
        v2.push_back(arr[i]);
    }
    int i=0 ,j=0 ,k=0 ;
    while(i<v1.size() || j<v2.size())
    {
        if(i<v1.size())
        arr[k++] = v1[i++];
        if(j<v2.size())
        arr[k++] = v2[j++];
    }
	}
};
