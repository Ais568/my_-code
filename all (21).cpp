#include <bits/stdc++.h>
using namespace std;

//void fun3(int n)
//{
  //  cout<<n<<" days left";
//}
//void fun2(int n)
//{
 //   cout<<n<<" days left";
    
//}
//void fun1(int n)
//{
  //  cout<<n<<" day left";
    
//}
//void fun0(int n)
//{
  //  cout<<"happy";
  
//}

//int main() {
	//recursion of functions;
//	fun3(3);
//	fun2(2);
//	fun1(1);
//	fun0(0);

//}

//void fun0(int n)
//{
  //  cout<<"happy";
    
//}
//void fun1(int n)
//{
  //  cout<<n<<"days left";
    //fun0(n-1);
//}
//void fun2(int n)
//{
 //   cout<<n<<"days left";
   // fun1(n-1);
//}
//void fun3(int n)
//{
  //  cout<<n<<"days left";
    //fun2(n-1);
//}
//int main()
//{
    
  //  fun3(3);
//}

//void fun3(int n)
//{
  //  if(n==0)
    //{
      //  cout<<"happy";
    //    return;
    //}
    //cout<<n<<"days left";
    //fun3(n-1);
//}
//int main()
//{
 //   int n=8;
  //  fun3(8);
//}

void fun3(int n)
{
    if(n==2)
    {
        cout<<"happy";
        return;
    }
    cout<<n<<"days left";
    fun3(n-2);
}
int main()
{
    int n=10;
    fun3(10);
}



