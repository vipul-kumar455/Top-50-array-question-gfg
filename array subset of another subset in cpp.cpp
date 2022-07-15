string isSubset(int a1[], int a2[], int n, int m) {
    map<int,int>mp;
    
    for(int i=0;i<n;i++)
    {mp[a1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        if(mp[a2[i]]==0) // if map does not contain anyelement of a2 then
        //it will return 
       // 0
         //else 1
        return "No";
    }
    return "Yes";
   
    
}