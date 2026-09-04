#include <bits/stdc++.h>
using namespace std;

int main() {
   // int arr[1000];
   // int n;
  //  cout<<"Enetr your number:";
  //  cin>>n;
  //  cout<<"Enter your array:";
  //  int i;
  //  for(i=o;i<n;i++)
  //  cin>>arr[i];
 //  int  index=i
  //  for(i=0;i<n-1;i++)
  //  {
   //     int j;
   //     for(j=i+1;j<n;j++)
   //     {
    //        if(arr[j]<arr[index])
    //        index=j
     //   }
     //    swap(arr[i];arr[index])
   // }
   //  for(i=0;i<n;i++)
   //  cout<<arr[i]<<" ";
   
   
   int arr[6]={10,4,1,3,2,7};
   int i;
   for(i=0;i<6;i++)
   {
       int index=i;
       int j;
       for(j=i+1;j<6;j++)
       {
           if(arr[j]>arr[index])
           index=j;
       }
        swap(arr[i],arr[index]);
   }
     for(i=0;i<6;i++)
     cout<<arr[i]<<" ";
    
     
    
        
    
    
}
