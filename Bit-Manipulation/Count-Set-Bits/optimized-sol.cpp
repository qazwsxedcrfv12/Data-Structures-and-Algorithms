// Count number of set bits in the given number
//Time Complexity : theta(total set bits in n)
// This solution traverses through only set bits of the number

#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)


using namespace std;


int main()
{
   f0;
   int n,res=0;
   cin>>n;
   
   while(n)
   {
      res++;
      n = n & (n-1);    // removing the last set bit of the given number
   }
   
   cout<<res<<"\n";
   return 0;
   
}
