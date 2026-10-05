#include <bits/stdc++.h>
using namespace std;

int main() {
	// binary search in 2 arrays;
	//method 1;
	n=4;m=5;x=52
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        matrix[i][j]==x;
	        return 1;
	    }
	}
	 return 0;
	 
	 //method2;
	 n=4;m=5;int x=52;
	 for(i=o;i<n;i++)
	 {
	    if(matix[i][0]<x&&matrix[i][m-1])
	    int start=0;end=n-1;
	    while(start<=end)
	    {
	        mid=start+end/2;
	        if(matrix[i][mid]==x)
	        return 1;
	        elseif(matrix[i][j]<x)
	        start=mid+1;
	        else;
	        end=mid-1;
	        
	        
	    }
	    
	 }
      //method3
      start=0;end=n*m-1;
      while(start<=end)
      {
          mid=start+end/2;
          row_index=mid/m;
          col_index=mid%m;
          if(matrix(row_index)[col_index]==x)
          return 1;
          elseif(matrix[row_index][col_index]<x)
          start=mid+1;
          else;
          end=mid-1;
      }
      return 0;
      
      
      //search in sorted row and col wise matrix;
      n=5;m=5;x=50;
      int i=0;j=m-1;
      while(i<n&&j>=0)
      {
          if(matrix[i][j]==x)
          return 1;
          elseif(matrix[i][j]<x)
          i++;
          else
          j--;
      }
       return 0;
      
      
      
}
