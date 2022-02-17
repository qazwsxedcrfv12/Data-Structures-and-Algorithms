// Check if given no is Palindrome or not

#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<iostream>

using namespace std;


int main(){
   int n;
   cin>>n;
   
   int rev = 0;
   int temp = n;
   while(temp!=0)                 // Run the loop till temp becomes zero
   {
       rev = rev*10 + temp%10;               // Logic to reverse the number
       temp/=10;
   }
   
   if(n==rev)
     cout<<"Palindrome"<<"\n";
   else
     cout<<"Not Palindrome"<<"\n";
  return 0;
}
   
