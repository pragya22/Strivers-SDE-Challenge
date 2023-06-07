https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> majority;
    int n=arr.size();
    int lim=floor(n/3);
    int count1=0,
        count2=0;
    int element1=INT_MIN,
         element2=INT_MIN;
	for(int i=0;i<n;i++)
	{	
         if (count1 == 0 && element2!=arr[i]) {
           count1 = 1;
           element1 = arr[i];
         }
        else if (count2 == 0 && element1!=arr[i]) {
           count2 = 1;
           element2 = arr[i];
         }
        else if(arr[i]==element1)
			    count1++;
        else if(arr[i]==element2)
			    count2++;
        else {
          count1--;
          count2--;
        }
    }
	count1=0;
  count2=0;
	for(int i=0;i<n;i++)
	{
		if(element1==arr[i])
			count1++;
   if(element2==arr[i])
			count2++;

	}
	if(count1>=lim+1)
		 majority.push_back(element1);
	if(count2>=lim+1)
		 majority.push_back(element2);
sort(majority.begin(),majority.end());

		return majority;

}