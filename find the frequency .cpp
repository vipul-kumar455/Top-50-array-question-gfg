int findFrequency(vector<int> v, int x){
   unordered_map<int,int>mp;
   for(auto i:v)
   {
       mp[i]++;
   }
   for(auto i:mp)
   {
       if(i.first==x)
       {
           return i.second;
       }
   }
   return 0;
    
}
