https://www.codingninjas.com/codestudio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	long long  power=1;
	int num=n;
	long int xx=x;
	while(num)
	{
		if(num%2==0)
		{	
			xx=( (xx % m)* (xx % m) ) % m;
			num=num/2;
		}
		else
		{	
			power = ( (power % m)* (xx % m) ) % m;	
			num=num-1;
		}

	}
	return (int)power;
}