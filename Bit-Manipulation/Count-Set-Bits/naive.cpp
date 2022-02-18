// Count number of set bits in the given number
//Time Complexity : theta(total bits in n)
// This solution traverses through all bits of the number

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
      res = res + (n&1);     checking if last bit of the number is set or not
      n = n >> 1;
   }
   
   cout<<res<<"\n";
   return 0;
}
