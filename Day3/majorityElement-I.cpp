https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int res=0,count=1;
	for(int i=1;i<n;i++)
	{
		if(arr[res]==arr[i])
			count++;
         else 
		 	count--;
         if (count == 0) {
           count = 1;
           res = i;
         }
    }
	count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[res]==arr[i])
			count++;

	}
	if(count>n/2)
		return arr[res];
	else
		return -1;	
}