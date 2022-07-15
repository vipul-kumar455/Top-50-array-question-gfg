
#include <iostream>

using namespace std;

int main()
{
    int n=29;
    int a[n]={5 ,5, 7, 3, 8, 2, 2, 0, 6, 9, 5, 4, 7, 9, 7, 6, 1, 4, 2, 9, 7, 8, 1, 1, 1, 7, 5, 7, 8};
   sort(a,a+n);
   
   string s1,s2;
   
  long long sum=0;
   for(int i=0;i<n;i+=2)
   {
       s1+=to_string(a[i]);
       
   }
    for(int i=1;i<n;i+=2)
   {
       s2+=to_string(a[i]);
       
   }
   //cout<<s1<<" "<<s2;
  long long num=0,num2=0;
  for (int i = 0; i < s1.size(); i++) 
  {
        num = num * 10 + (int(s1[i]) - 48);
  }
   for (int i = 0; i < s2.size(); i++) 
  {
        num2 = num2 * 10 + (int(s2[i]) - 48);
  }
   sum=num+num2;
    cout<<sum;

    return 0;
}