#include <bits/stdc++.h>
using namespace std; 
//	void print(int num,int N)
//	{
//	    if(num==N)
//	    {
//	        cout<<num<<endl;
//	        return;
//	    }
//	    cout<<num<<endl;
//	    print(num+1,N);
//	}
 //int main()
 //{
   //  int N;
    // cin>>N;
     //print(1,N);
 //}
 
// void print(int N)
 //{
  //   if(N==1)
//     {
 //        cout<<1<<endl;
 //        return;
   //  }
    // print(N-1);
     //cout<<N<<endl;
 //}
  //int main()
  //{
    //  int N;
     // cin>>N;
      //print(N);
  //}
  
 // void printeven(int num,int N)
  ///{/
     // if(num==N)
      //{
    //      cout<<num<<endl;
     //     return;
      //}
      //cout<<num<<endl;
      //printeven(num+2,N);
  //}
  //int main()
  //{
/////////      int N;
    //  cin>>N;
     // if(N%2==1)
      //{
    //      N--;
    //  }
    //  printeven(2,N);
 // }
  
  
//  void printeven(int N)
  //{
    //  if(N==2)
      //{
        //  cout<<2<<endl;
          //return;
      //}
      //printeven(N-2);
      //cout<<N<<endl;
  //}
  //int main()
  //{
//      int N;
//      cin>>N;
 //     if(N%2==1)
 //     {
 ///         N--;
//      }
 //     printeven(N);
  //}

void printeven(int num,int N)
{
    if(num>N)
    return;
    
    

cout<<num<<endl;
printeven(num+2,N);
}
int main()
{
    int N;
    cin>>N;
    printeven(2,N);
}