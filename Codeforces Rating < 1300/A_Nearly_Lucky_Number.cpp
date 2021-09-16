#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
ll n;
cin>>n;
ll count=0;
while(n>0)
{
    if((n%10==4) || (n%10==7))
    {
        count++;
    }
    n=n/10;
}
if(count==4 || count==7)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}