// Count no of digits in a given no
// Given { i/p : 1234 , o/p : 4 } { i/p : 738399 , o/p : 6 }

#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<iostream>

using namespace std;


int find_no_digits(int n){
   if(n==0)                           // Base Case ( if n is 0 no of digits is 0 )
      return 0;
   return 1 + find_no_digits(n/10);   // Add one to count and call at n/10;
} 

int main(){
   int n;
   cin>>n;
   
   int count = find_no_digits(n);    // Recursive call
   cout<<count<<"\n";
  return 0;
}
   
