#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int a=(k*l)/nl;
int b=(c*d);
int e=(p/np);
int temp=min(a,b);
int ans=min(temp,e);
cout<<ans/n<<endl;
return 0;
}
