//Problem Link: https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge
#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int m=matrix.size(); // rows
    int n=matrix[0].size();//columns
        
        int col[n]={0};
        int row[m]={0};
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((row[i]==1 )|| (col[j]==1))
                {
                    matrix[i][j]=0;
                }
            }
        }
}