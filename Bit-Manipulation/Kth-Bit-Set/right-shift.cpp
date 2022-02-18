//Find if kth bit of a number is set or not
//using right shift operator

// The logic to use right shift operator is, shift the kth bit of number to 1st poistion and bitwise & the number with 1 ( as 1 is the only number with 1 bit set)
// So if after doing bitwise and if result is 1 then kth bit of given number was set.

#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)


using namespace std;


int main()
{
   f0;
   int n,k;
   cin>>n>>k;
   
   if((n>>(k-1))&1 == 1)
     cout<<"Kth bit is set\n";
   else
     cout<<"kth bit is not set\n";
   return 0;
}
