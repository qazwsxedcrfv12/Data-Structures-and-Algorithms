// Find if kth bit of the given number is set or not
// using left shift operator
// The logic to use left shift operator is, create a mask ( ( 1<<k ) means a number which has only kth bit set), so after doing bitwise & of given number with mask if the 
// result is non-zero the kth bit of given number was set or viceversa.

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
   
   if((n & (1<(k-1))) != 0 )
     cout<<"Kth bit is set\n";
   else
     cout<<"kth bit is not set\n";
   return 0;
}
