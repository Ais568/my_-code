#include <bits/stdc++.h>
using namespace std;

int main() {
	//sort vowel in string
	vector<lower>(26,0);
	vector<upper>(26,0);
	for(int i=0;i<s.size;i++)
	{
	    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
	         lower(s[i]-1)++;
	         s[i]==#
	   else(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
	         upper(s[i]-1)++
	         s[i]==#
	}
	for(i=0;i<26;i++)
	{
	    char c='A'+i;
	    while(upper[i])
	    {
	        ans+=c;
	        upper[i]--;
	    }
	}
	for(i=0;i<26;i++)
	{
	    char c='a'+i;
	    while(lower[i])
	    {
	        ans==c;
	        lower[i]--;
	    }
	}
	while(second<s.size())
	{
	    if(s[first]==#)
	    {
	        s.[first]==s.[second];
	        second++;
	    }
	    first++;
	}
	return s;
	
	
	//add string
	
	string s;
	int index1=num1.size()-1;int index=num2.size()-1;
	int carry=0;sum;
	while(index2<0)
	{
	    sum=num1[index1]-'o'=num2[index2]-'o'+carry;
	    carry=sum/10;
	    char c='o'+sum%10;
	    ans+=c;
	    
	    index 2--;index1--;
	    
	    
	}
	while(index1<0)
	{
	    sum=num1[index1]-'o'+carry;
	    carry=sum/10;
	    char c='o'+sum%10;
	    ans+=c;
	    index--
	}
	if(carry)

	ans+=1;
	reverse(ans.begin();ans.end());
	return ans;
	
	//factorial of number
	
	vector<int>ans(1,1);
	while(n>1)
	{
	    for(i=0;i<s.size();i++)
	    {
	        res=ans[i]*n+carry;
	        carry=res/10;
	        ans[i]=res%10;
	        
	    }
	    while(carry)
	    {
	        ans.push.back(carry%10);
	        carry/=10
	    }
	    n--;
	    reverse(ans.begin(),ans.end())
	    
	    
	    
	}
	
	
	//roman to integer
	while(index<s.size())
	{
	   
	    
	        if(num(s[index])<num(s[index+1]))
	            sum-=num(s[index]);
	        else
	           sum+=num(s[index]);
	           
	      index++;
	      
	      sum+=num(s[s.size9]-1)
	      return sum;
	      
	      int num(char c)
	         
	    
	    ifc=='I')
	     return 1;
	    elif(c=='V')
	     return 5;
	    elif(c=='X')
	      return 10;
	     elif(c=='L')
	      return 50;
	     elif(c=='C')
	      return 100;
	     elif(c=='D')
	     return 500;
	     
	     else
	      return 1000;
	}

}
