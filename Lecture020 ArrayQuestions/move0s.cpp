#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector <int> v = {1,0,3,0,2,0,5};
   vector <int> ans;
   int n=v.size();
   for(int i=0;i<n;i++){
    if(v[i]==0){
        ans.push_back(v[i]);
    }
   }
   for(int i=0;i<n;i++){
    if(v[i]!=0){
        ans.push_back(v[i]);
    }
   }
   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }
    return 0;
}