// LCM (Least common multiple) of a number

#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int find_gcd(int a, int b)
{
    if(b==0)
      return a;
    return find_gcd(b,a%b);
}

int main(){

  f0;
  int a,b;
  
  cin>>a>>b;
  
  int gcd_of_no = find_gcd(a,b);
  
  int lcm = a*b / gcd_of_no;
  
  cout<<lcm<<"\n";
 return 0;
}



