#include <bits/stdc++.h>
using namespace std;

int main() {
	int a=10;
	int*ptr=&a;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	int b=20;
	ptr=&b;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	int arr[5]={1,2,3,4,5};
	int*ptr=arr;
	for(int i=0;i<5;i++)
	{
	    cout<<*(arr+i)<<endl;
	}
	for( int i=0;i<5;i++)
	{
	    cout<<arr[i]<<endl;
	}
	for(int i=0;i<5;i++)
	{
	    cout<<arr+i<<endl;
	    cout<<&arr[i]<<endl;
	}
	
	
	for(int i=0;i<5;i++)
	{
	    cout<<*(ptr+i)<<endl;
	    cout<<ptr[i]<<endl;
	    cout<<*ptr<<endl;
	    ptr++;
	}
	
	
	char arr[5]="1234";
	char*ptr=&arr;
	cout<<ptr<<endl;
	cout<<arr<<endl;
	cout<<(void*)ptr<,endl;
	cout<<(void*)arr<<endl;
	
	void inc(int*ptr)
	{
	    *ptr=*ptr+1;
	}
	int main()
	{
	    int num=10;
	    int temp=num;
	    inc(num);
	    cout<<num<<endl;
	}
	
	void inc(int n)
	{
	    n++
	}
	int main()
	{
	    int num=10;
	    int temp=num;
	    inc(num);
	    cout<<num<<endl;
	}
	
	void dob(int*ptr)
	{
	    for(int i=0;i<5;i++)
	    ptr[i]=2xptr[i];
	}
	int main()
	{
	    int arr[5]={1,2,3,4,5};
	    dob(arr)
	    for(int i=0;i<5;i++)
	    cout<,arr[i]<<endl;
	    
	}
	void swapping(int*ptr1;int*ptr2)
	{
	    int temp=*ptr1;
	    *ptr1=*ptr2;
	    *ptr2=temp;
	}
	int main()
	{
	    int first=10;
	    int second=20;
	    swapping(&first;&second);
	    cout<<first<<second;
	}
	int num=10;
	int &temp=num;
	temp=temp+1;
	
	
	cout<<&temp<<endl;<<&num<<endl;
	
	void swapping(int&p1;int&p2)
	{
	    int temp=p1;
	    p2=p1;
	    p1=temp;
	}
	int main()
	{
	    int first=10;
	    int second=20;
	    swapping(first;second);
	    cout<<first<<second;
	}
	void fun(int**p1)
	{
	    *p1=*p1+1
	    
	}
	 int main()
	 {
	     int n=10;
	     int*p=&n;
	     int**ptr=&p;
	     cout<<p<<endl;
	     func(p);
	     cout<<*p<<endl;
	     
	     fun(ptr)
	     cout<<p;
	     
	     
	 }
	 
	 int main()

{
    int n=10;
    int *p=&n;
    int**p1=&p;
    int***p2=&p1;
    
    *p=*10;
    **p=**p+10;
    ***p=***p+10;
    cout<<n<<endl;
}
void fun(int**p1)
{
    *p1=*p1+1;
}
 int main()
 {
     int n=10;
     int*p=&n;
     int**p2=&p;
     
     cout<<p<<endl;
     fun(p2)
     cout<<p<<endl;
 }
	

	

}
