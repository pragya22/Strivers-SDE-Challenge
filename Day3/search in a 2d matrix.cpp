https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m= mat.size();
    int n=mat[0].size();
    int i=0;
    int j=n-1;
    int element;

    while(i<=m-1 && j>=0)
    {   element=mat[i][j];
        if(element==target)
            return true;
        else if(target<element)
            j--;
        else if(target>element)  
            i++;  
    }  
    return false;     
        
}