
/*
Problem:
Given an Array A of N integers and a number K, Find the number of subarrays (L,R) such that A[L]+A[L+1]+...+A[R]=K 
*/

/* we know that for sum range query we can write p(R)-p(L-1)=A[L]+A[L+1]+...+A[R] where p(R)=A(1)+A(2)...+A(R) AND P(L-1)=A(1)+A(2)...A(L-1).Hence we can write p(R)-p(L-1)=k and further p(L-1)=p(R)-K
  and we try to find valid L such that above condition satisfies*/

#include<bits/stdc++.h>
using namespace std;
  
int subarraySum(vector<int>&A, int k) 
{
  unordered_map<int,int> count;
  vector<int> prefixsum;
  int ans=0;
  prefixsum.push_back(A[0]);
  for(int i=1;i<A.size();i++) 
  {
  prefixsum.push_back(prefixsum[i-1]+A[i]); 
  } 
  count[k]++;
   for(int i=0;i<A.size();i++)
  {
    ans+=count[prefixsum[i]];
    count[prefixsum[i]+k]++;
  }
 return ans;
}


int main()
{
  vector<int> A;
  int k;
  cin>>k;
  //take input for vector A
  subarray(A,k);
 
  return 0;
}


