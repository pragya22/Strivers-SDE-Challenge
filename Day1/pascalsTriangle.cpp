https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
vector<long long int> pascalRow(int val)
{
  long long prod=1;
  vector<long long int> row;
  row.push_back(1);
  for(int j=1;j<val;j++)
  {
    prod=prod*(val-j);
    prod=prod/j;
    row.push_back(prod);
  }
  return row;
}

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> triangle;
  
  for(int i=1;i<=n;i++)
  {
    vector<long long int> row=pascalRow(i);
    triangle.push_back(row);
  }
  return triangle;
}
