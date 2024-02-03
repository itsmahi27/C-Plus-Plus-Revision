#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s="I like to code";
   int j=0;
   for(int i=0;i<=s.size();i++){
    if(s[i] == ' '){
        reverse(s.begin()+j,s.begin()+i);
        j=i+1;
    }
    if(s[i]=='\0'){
        reverse(s.begin()+j,s.end());
    }
   }
   cout<<s;
    return 0;
}