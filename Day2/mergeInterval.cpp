//https://www.codingninjas.com/codestudio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n=intervals.size();
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> merged_interval;
    for(int i=0;i<n;i++)
    {   
        if(merged_interval.empty() || intervals[i][0]> merged_interval.back()[1])
        {
            merged_interval.push_back(intervals[i]);
        }
        else
        {
            merged_interval.back()[1]=max(merged_interval.back()[1],intervals[i][1]);
        }
    }
    return merged_interval;
}
