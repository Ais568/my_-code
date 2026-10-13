#include <bits/stdc++.h>
using namespace std;

int main() {
	//longest pallon drome
    vector<lower>(26,0);
    vector<higher1>(26,0);
    for(i=0,i=s.size(),i++)
    {
        if(s.[i]>'a');
          lower[s.[i]-'a']++;
        else;
         upper[s[i]-'a']++;
         
    }
    int count=0;
    bool odd=0;
    for(i=0;i<26;i++)
    {
    if(lower[i]%2==0);
    count+= lower[i];
    else;
    count+=lower[i]-1;
    odd=1;
}
    if(upper[i]%2==0);
    count+=upper[i];
    else;
    count+=upper[i]-1;
    odd=1;
}


//sorting the sentence

vector<string>ans(10);
string temp;
index=0;int count=0;
while(index<s.size())
{
    for(i=0;i<s.size;i++)
    {
        if(s[i]==' ')
        int pos=temp[temp[s.size()-1]-'0']
        temp.pop_back();
        ans[pos]=temp;
        temp.clear()
        count++
    }
    index++
    {
        int pos=temp[temo[s.size()-1]-'0'];
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        count++
    }
    
    for(i=0;i<count;i++)
    ;
        temp+=ans[i];
        temp+=' ',
    }
    temp.pop_back()
    return temp;
    
    
    
}
