//https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int row=0,col=0,maxrow=n-1,maxcol=m-1;
    while (row < maxrow && col < maxcol)
     {
      
      int prev = mat[row + 1][col];
      //top row
      for (int i = col; i <= maxcol; i++)
      {
          int cur=mat[row][i];
          mat[row][i]=prev;
          prev=cur;
      }
      row++;
       //right col
      for (int j = row;j <= maxrow; j++)
      {
          int cur=mat[j][maxcol];
          mat[j][maxcol]=prev;
          prev=cur;
      }
      maxcol--;
      //bottom row
      if(row<(maxrow + 1))
      {
        for (int i = maxcol; i >= col; i--) {
          int cur = mat[maxrow][i];
          mat[maxrow][i] = prev;
          prev = cur;
        }
        maxrow--;
      }
      //leftcol
      if(col < (maxcol + 1))
      {
        for (int i = maxrow; i >= row; i--) {
          int cur = mat[i][col];
          mat[i][col] = prev;
          prev = cur;
        }
        col++;
      }
    }

}