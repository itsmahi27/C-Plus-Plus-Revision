#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int i=0;
   float ans=0;
//    while(n!=0){
//     // int digit = n&1;
//     int digit = n%2;
//     ans = digit * pow(10,i) + ans;
//     i++;
//     // n = n>>1;
//     n = n/2;
//    }
while(n!=0){
    int bit = n%10;
    if(bit){
        ans += pow(2,i);
    }
    n=n/10;
    i++;
}
   cout<<ans<<endl;
    return 0;
}