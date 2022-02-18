
// LCM (Least common multiple) of a number

#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int lcm(int a, int b)
{
    int res = max(a,b);
    while(true)
    {
       if(res%a==0 && res%b==0)
         return res;
       res++;
    }
   return res;
}

int main(){

  f0;
  int a,b;
  
  cin>>a>>b;
  
  int lcm_of_no = lcm(a,b);
  
  cout<<lcm_of_no<<"\n";
 return 0;
}


