#include <bits/stdc++.h>
using namespace std;

int main() {
	//memory management
	int*ptr=new int;
    *ptr=2;
    cout<<*ptr<<endl;
    float*ptr2=new float;
    *ptr2=3.6;
    cout<<*ptr2<<endl;
    int n;
    cout<<"enter your size:"<<endl;
    cin>>n;
    int*p=new int[n];
    for(int i=0;i<n;i++)
    {
        p[i]=i+1;
    }
    for(int i=0;i<n;i++)
    cout<<p[i]<<endl;

    
    
    

}
