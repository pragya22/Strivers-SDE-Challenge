https://www.codingninjas.com/codestudio/problems/maximum-meetings_8230795?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
struct meeting{
    int start;
    int end;
    int position;
};
bool comparator(struct meeting m1, meeting m2)
{
    if (m1.end<m2.end) return true;
    else if(m1.end>m2.end) return false;
    else if(m1.position<m2.position) return true;
    return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    int n=start.size();
    struct meeting meet[n];
    vector<int> ans; //to store selected meetings 
    

    for(int i=0;i<n;i++)
    {
        meet[i].start =start[i];
        meet[i].end = end[i];
        meet[i].position = i+1;
    }
    sort(meet, meet+n,comparator);
     
    int limit=meet[0].end;
     ans.push_back(meet[0].position);

     for(int i=0;i<n;i++)
     {
         if(meet[i].start>limit)
         {
             limit=meet[i].end;
             ans.push_back(meet[i].position);
         }
     }

     return ans;


}