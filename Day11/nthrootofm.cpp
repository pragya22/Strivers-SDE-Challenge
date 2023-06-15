https://www.codingninjas.com/codestudio/problems/find-nth-root-of-m_8230799?challengeSlug=striver-sde-challenge

int multiply(int num, int n)
  {
    int ans=1;
    for(int i=1;i<=n;i++)
    {
      ans=ans*num;
    }
    return ans;
  }
int NthRoot(int n, int m) {
  // Write your code here.

   int low = 1;
  int high = m/n;

  while(low <= high)
  {
    int mid = low + (high-low)/2;

    if(multiply(mid, n) == m)
      return mid;
    else if(pow(mid, n) > m)
      high = mid - 1;
    else
      low = mid + 1;
  }

  return -1;
}

