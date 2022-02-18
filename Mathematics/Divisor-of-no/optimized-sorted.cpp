// Find divisor of a number
// Time complexity : O(sqrt(n)) 
//Print divisors in sorted order


#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>

#define f0 ios_base::sync_with_stdio(false); cin.tie(0)
#define pb v.push_back

using namespace std;

vector<int> divisor_of_no(int n)    // The logic is divisors always appear in pairs
{
    vector<int>v;
    int i;
    for(i=1; i*i<n; i++)      // Running loop till sqrt(n) x*y<=n
    {
        if(n%i==0)
          pb(i);
    }
    for(; i>=1; i--)
    {
       if(n%i==0)
        pb(n/i);
    }
  return v;
          
}

int main(){

  f0;
  int n;
  
  cin>>n;
  
  vector<int>res = divisor_of_no(n);
  
  for(auto it: res)
    cout<<it<<" ";
  cout<<"\n";
 return 0;
}


