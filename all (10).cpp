#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //trapping rain water
	left max[n];right max[n];
	int left[0]=0;
	for(i=0;i<n;i++)
	
	    int left max=max(leftmax[i-1],height[i-1]);
	    int rightmax[n-1]=0;
	    for(i=n-2;i>=0;i--)
	    int rightmax=max(rightmax[i+1];height[i+1]);
	    int water=0;
	    for(i=0;i<n;i++)
	    {
	        min height=min(leftmax[i],rightmax[i]);
	        if(min height>height[i])
	        water=min height-height[i];
	    }
	    return water;
	    
	    //other method of trapping rainwater;
	    int leftmax=0;int rightmax=0;maxheight=height[0];index=0;int n=height.size(),water=0;
	    for(i=1;i<n;i++);
	    {
	        if(maxheight<height[i])
	        maxheight=height[i];
	        index=i;
	    }
	    for(i=0;i<index;i++)
	    if(leftmax>height[i])
	    {
	      water+=leftmax-height[i]
	    }
	    else;
	    leftmax=height[i];
	    for(i=n-1;i>index;i--)
	    if(rightmax>height[i])
	    {
	        water+=rightmax-height[i];
	    }
	    else;
	    rightmax=height[i];
	    
	    
	    // row major arrays;
	    
	    index=row_index*col+col_index;
	    address of array=base adress+index*size of element;
	    address of array=base adress+(i*col+j)*size of an element;
	    
	    //search of element in array in row major;
	    int arr[3][4];
	    int main()
	    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	    int x=7;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if(arr[i][j]=x)
	            cout<<"yes"<<" ";
	            return 0;
	        }
	    }
	    cout<<"no"<<" ";
	    
	    //search an element in other method;
	    int x=17;
	    for(row=0;row<3;row++)
	    for(col=0;col<4;col--)
	    {
	        if(arr[row][col]=x)
	        {
	            cout<<"yes"<<" ";
	            return o;
	        }
	    }
	     cout<<"no"<<" ";
	     
	     
	     
	     //add 2matrix;
	     int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	     int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	     int ans[3][4];
	     for(row=0;row<3;row++)
	     for(col=0;col<4;col++)
	     ans[3][4]=arr1[3][4]+arr2[3][4];
	     
	     for(row=0;row<3;row++)
	     for(col=0;col<4;col++)
	     {
	         cout<<ans[3][4]<<" ";
	     }
	     
	     //column major arrays
	     index=col-index+row+row_index;
	     
	     
	     //wave form ;
	     for(j=0;j<col;j++)
	     if(j%2=0)
	     {
	         for(i=0;i<row;i++)
	         cout<<arr[i][j]<<" ";
	     }
	     else;
	     for(i=row-1;i>=0;--)
	     cout<<arr[i][j]<<" ";
	     
	     //spiral form arrays;
	     
	     int top=o;int bottom=row-1;int lest=0;int right=col-1
	     
	     while(top<=bottom&&left<=right)
	     {
	         for(j=left;j<right;j++)
	         cout<<arr[top][j]<<" ";
	         top++;
	         
	         for(i=top;i<bottom;i++)
	         cout<<arr[i][right]<<" ";
	         right++;
	         
	         if(top<=bottom)
	         
	             for(j=right;j>=left;j--)
	             cout<<arr[bottom][j]<<" ";
	             bottom--;
	         if(left<=right)
	             for(i=bottom;i>=top;i--)
	             cout<<arr[i][left];
	             left--
	         
	     }
	     
	     
	     //transpose matrix;
	     for(i=0;i<row-1;i++)
	     {
	         for(j=i+1;j<col;j++)
	         swap(matrix[i][j],matrix[j][i])
	     }
	     
	     
	         
	     
	     
	     
}
