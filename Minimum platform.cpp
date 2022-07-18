int findPlatform(int arr[], int dep[], int n)
    {
    
    	sort(arr,arr+n);
    		sort(dep,dep+n);
    		
    		int ans=1;
    		int p=1;
    		int i=1,j=0;
    		while(i<n && j<n)
    		{
    		    if(arr[i]<=dep[j])
    		    {
    		        p++;
    		        i++;
    		         if(p>ans)
    		    {
    		        ans=p;
    		    }
    		    }
    		    else 
    		    {
    		        p--;
    		        j++;
    		    }
    		   
    		}
    		return ans;
    		
    }