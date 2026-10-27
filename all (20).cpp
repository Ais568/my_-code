#include <bits/stdc++.h>
using namespace std;

int main() {
	// creting 2d array;
//	int n,m;
//	cin>>n>>m;
//	int**ptr=new int*[n];
//	for(int i=0;i<n;i++)
//	{
//	    ptr[i]=new int[m];
//	}
//	for(int i=0;i<n;i++)
//	for(int j=0;j<m;j++)
//	cin>>ptr[i][j];
//	
//	for(int i=0;i<n;i++)
//	{
//	    for(int j=0;j<m;j++)
//	    
//	        cout<<ptr[i][j]<<" "<<endl;
//	    
//	}
//	for( int i=0;i<n;i++)
//	{
//	    delete []ptr[i];
//	    delete []ptr;
//	}
//	
//	
	//creating 3d array;
	
	int L,B,H;
	cin>>L>>B>>H;
	int***ptr=new int**[L];
	for(int i=0;i<L;i++)
	{
	    ptr[i]=new int*[B];
	    for(int j=0;j<B;j++)
	    {
         ptr[i][j]=new int[H];
	    }
	    
	    
	    
	}
	for(int i=0;i<L;i++)
	for(int j=0;j<B;j++)
	for(int k=0;k<H;k++)
	ptr[L][B][H]=i+j+k;
	
	for(int i=0;i<L;i++)
	for(int j=0;j<B;j++)
	for(int k=0;k<H;k++)
	cout<<ptr[i][j][k]<<" ";
	
	for(int i=0;i<L;i++)
	for(int j=0;j<B;j++)
	cout<<ptr[i][j];
	cout<<ptr[i];
	cout<<ptr;
	    
	
	
	
	
	

}
