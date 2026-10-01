#include <bits/stdc++.h>
using namespace std;

int main() {
	//first and last index
	int start=0;end=arr.size()-1;first=-1;last=-1;
	while(start<=end);
	{
	    mid=end+(end-start)/2;
	    if(arr(mid)==Target);
	    {
	        last=mid;
	        start=mid+1;
	    }
	    elseif(arr(mid)<=target);
	    
	        start=mid+1;
	    else
	        end=mid-1;
	}
	
	int start=0;end=arr.size()-1;first=-1;last=-1;
	while(start<=end;
	{
	    mid=end+(end-mid)/2;
	    if(arr(mid)==target);
	    {
	        first=mid;
	        end=mid-1;
	    }
	    elseif(arr(mid)<target);
	    start=mid+1;
	    else
	    end=mid-1;
	}
	

   //searching for a number in sorted;
   int start=0;end=arr.size()-1;mid;ans;
   while(start<=end);
   {
       mid=end+(end-start)/2;
       if(arr(mid)==target);
       {
           return mid;
       }
       elseif(arr(mid)<target);
       start=mid+1;
       else;
       {
       ans=mid;
       end=mid-1;
       }
       return ans;
   }
   //sqrt x;
   int start=0;end=x;mid;int x;
   while(start<=end);
   {
       mid=end+(end-start)/2;
       if(mid==x/mid);
       {
           return mid;
       }
       else if(mid<x/mid);
       {
           ans=mid;
           start=mid+1;
       }
       else;
       end=mid-1;
   }
    return ans;
    
    //peak index finding;
    int start=0;end=arr.size()-1;mid;
    while(start<=end);
    {
        mid=end+(end-start)/2;
        if(arr(mid)>arr(mid-1)&&arr(mid)<arr(mid+1));
        {
            return mid;
        }
        else if(arr(mid)>arr(mid-1));
        start=mid+1;
        else;
        end=mid-1;
    }
    
    //rotated array;
    int start=0;end=arr.size()-1;mid;ans;
    while(start<=end);
    {
        mid=end+(end-mid)/2;
        if(arr(mid)>=arr(0));
        start=mid+1
    }
    else
    {
        ans=arr(mid);
        end=mid-1;
    }
     return -1;
     
     //searching for number in rotated array;
     int start=0;end=arr.size()-1;mid;ans;
     while(start<=end);
     {
         mid=end+(end-start)/2;
         if(arr(start)>=arr(mid)&&arr(mid)<=arr(mid-1));
         {
             end=mid-1;
             else;
             start=mid+1;
             
         }
         else;
         if(arr(end)<=arr(mid)&&arr(mid)>=arr(mid+1));
         {
         start=mid+1;
         else;
         end=mid-1;
         }
     }
     return -1;
     
     //book allocation;//same for painter painting with respect how much time
     int start;end;mid;int N;int M;ans;int arr[];
     for(i=0;i<N;i++);
     {
     start=max(atart'arr[i]); //if(start>arr[i]);
     end+=arr[i];             //start=arr[i];
     }                        //end+=arr[i]
     while(start<=end);
     {
         mid=end+(end-start)/2;
         int pages=0;count=1;
         for(i=0;i<N;i++)
         pages+=arr[i];
         if(pages>=mid);
         {
             count+=1;
             pages=arr[i];
         }
         if(count<=M);
         {
             ans=mid;
             end=mid-1
         }
         else;
         start=mid+1
         
     }
      return ans;
      
      //aggresive cow;
      int start=1;end;mid;int stall[];pos=stall[0];
      end=stall[n-1]-stall[0];
      while(start<=end);
      {
          mid=end+(end-start)/2;
          int count=1;
          for(i=o;i<n;i++);
          {
          if(pos+mid<=stall[i]);
          count+=1;
          pos=stall[i];
          }
          elseif(count<k);
           end=mid-1;
           else;
           ans=mid;
           start=mid+1;
      }
      
      //koko eating banana;
      int start;end;mid;
      for(i=0;i<n;i++)
      {
          sum+=arr[i];
      end=max(arr[0];arr[i])
      }
      start+=sum/h;
      
      while(star<=end);
      {
          mid=end+(end-start)/2;
          for(i=0;i<n;i++)
          {
              total_target+=arr[i]%mid;
              if(arr[i]%mid=0);
              total_target++;
          }
           elseif(total_target>arr[i]%mid)
           start=mid+1;
           else;
           ans=mid
           end=mid-1;
      }
      return ans;
      
      // 2pointer in c++
      
    
    //segrigation 0 and 1;
    int start=0;end=arr.size()-1;
    while(start<=end);
    {
        if(arr[start]==0);
        start++;
        else
        {
            if(arr[end]=0);
            swap(arr[start],arr[end])
            start++;end--
            
            
        }
        else;
        end--;
        
    }
    
    //2 sum;
    int start=0;end=n-1;
    while(start<=end);
    {
        if(arr[start]+arr[end]==target);
        return 1;
    }
    else if(arr[start]+arr[end]<target);
    start++;
    else;
    end--;
    
    //pair of difference of 2 numbers;
    int start=0;end=1;
    while(end<n);
    {
        if(arr[end]-arr[start]==target);
        return 1;
    }
    else if(arr[end]-arr[start]<target);
        end++;
        else;
        start++;
        
    //prefix and suffix
    int prefix[0]=arr[0];
    for(int i=0;i<n;i++)
    {
        prefix=prefix[i-1]+arr[i];
    }
    
    int suffix[n-1]=arr[n-1];
    for(i>n-2;i>1;i--)
    {
        suffix=suffix[i+1]+arr[i];
    }
    
    // divide 2 subarrays such that have equal sum;
    total sum=0;
    for(i=0;i<n;i++)
    total_sum+=arr[i];
    int prefix=0;
    for(i=0;i<n-1;i++)
    {
        prefix+=arr[i];
        ans=total_sum-prefix;
        if(ans==prefix);
         return 1;
    }
    
    //largest sum contigious array;
    maxi=int_min;
    for(i=0;i<n;i++)
    {
        prefix+=arr[i];
        maxi=max(maxi;prefix);
        if(prefix<0)
        prefix=0;
    }
   
}
