https://www.codingninjas.com/codestudio/problems/pair-sum_8230699?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   unordered_map<int,int> m;
   vector<vector<int>> count;

   for(auto ele :arr)
   {
      int value=m[s-ele];
      vector<int> pair(2);
      pair[0] =ele;
      pair[1]=s-ele;
      while(value--)
      {
         count.push_back(pair);
      }
      m[ele]+=1;
   }
   for(int i=0;i<count.size();i++)
   {
      vector<int> temp =count[i];
      sort(temp.begin(),temp.end());
      count[i] =temp;

   }
   sort(count.begin(),count.end());
   return count;
}