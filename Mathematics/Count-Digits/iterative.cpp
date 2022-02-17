// Count no of digits in a given no
// Given { i/p : 1234 , o/p : 4 } { i/p : 738399 , o/p : 6 }

#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<iostream>

using namespace std;


int main(){
   int n;
   cin>>n;
   
   int count = 0;
   while(n!=0)                 // Run the loop till n becomes zero
   {
       count++;               // Increment the count of digits
       n/=10;
   }
   
   cout<<count<<"\n";
  return 0;
}
   
