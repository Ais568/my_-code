#include <bits/stdc++.h>
using namespace std;

int pref=0;int suf=1;
while(suf<s.size())
{
    if(s[suf]=s[pref])
    {
      lps[suf]=pref+1;
      suf++;pref++;
    }
    if(pref==0)
    {
        lps[suf]=0;
        suf++;
    }
    else
    pref=lps[pref-1];
    
    else
     return lps(s.size()-1);
}

int main() {
	// string matching
	
	int first=0;int second=0;
	while(second<needle.size()&&first<haststay.size())
	{
	    if(needle[second]==hasstay[first])
	    {
	        second++;first++;
	    }
	    
	    if(second=0)
	    first++;
	    else
	    second=lps[second-1];
	    
	   
	}
	if(second=needle.size)
	{
	    return first-second;
	}
	else
	 return -1

}
