#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {

ll n;
cin>>n;
int x[n],y[n],z[n];

ll sum_x=0;
ll sum_y=0;
ll sum_z=0;
for(int i=1;i<=n;i++){
    cin>>x[i]>>y[i]>>z[i];
    sum_x+=x[i];
    sum_y+=y[i];
    sum_z+=z[i];
}
if(sum_x==0 && sum_y==0 && sum_z==0)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

return 0;
}
