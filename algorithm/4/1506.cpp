//
// Created by YMXD on 2021/4/8.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin>>s;
  int i;
  for(i=0;i<s.length()-1;i++)
    if(s[i]>=s[i+1])
      break;//跳出for
  if(i==s.length()-1)
  {
    swap(s[i],s[i-1]);
    cout<<s;
  }
  else
  {
    int mi=i;
    for(;i<s.length();i++)
      if(s[mi]>=s[i])
        mi = i;
    for(i=0;i<mi;i++)
      if(s[i]>s[mi])
        break;
    swap(s[mi],s[i]);
    cout<<s;
  }
}
