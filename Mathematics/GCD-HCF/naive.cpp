// Find GCD ( Greatest common Divisor ) of a number
// GCD ofa number is same as HCF os a number

#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int find_gcd(int a, int b)
{
   int res = min(a,b);
  
  while(res!=0)           // run loop until a no. is found which divides both no. or 0 comes
  {
     if(a%res==0 && b%res==0)
       break;
     res--;
  }
  
  return res;
}

int main(){

  f0;
  int a,b;
  
  cin>>a>>b;
  
  int res = min(a,b);   // gcd will always be smaller or equal to smaller no 
  
  int gcd_of_no = find_gcd(a,b);
  
  cout<<gcd_of_no<<"\n";
 return 0;
}



