#include <bits/stdc++.h>
using namespace std;

int main() {
	//rotation of matrix 90 in clockwise;
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    swap(arr[i][j],arr[j][i]);
	    
	    
	}
	for(i=0;i<n;i++)
	{
	 int start=0;end=n-1
     	while(start<end)
    	{
	      swap(arr[i][start],arr[i][end]);
	      start++;end--;
    	}
	}
	
	//rotation by 180 in clockwise;
	for(j=0;j<n;j++)
	{
	  int start=0;end=n-1;
    	while(start<end)
    	{
	      swap(arr[start][j],arr[end][j]);
	      start++;end--;
    	}
	}
	for(i=0;i<n;i++)
	{
     	int start=0;end=n-1;
        	while(start<end)
    	{
	       swap(arr[i][start],arr[i][end]);
	       start++,end--;
	    }
	}
	
	
	//rotate matrix 90 with anticlockwise
	//means rotating matrix with 270 clockwise;
	
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        swap(arr[i][j],arr[j][i])
	    }
	    
	}
	for(j=0;j<n;j++)
	{
	    int start=0;end=n-1;
	    
	        while(start<end)
	        {
	            swap(arr[start][j],arr[end][j]);
	            start++;end--;
	        }
	    
	}

}
