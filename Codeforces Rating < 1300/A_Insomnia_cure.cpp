#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int k,l,m,n,d;
cin>>k>>l>>m>>n>>d;
int arr[d];
if(n==1 && n<k && n<l && n<m && n<n)
{
    cout<<"0"<<endl;
}
else{
    for(int i=1;i<d+1;i++) {
    arr[i]=i;
}
int freq[d]={0};
for(int i=1;i<d+1;i++) {
    if((i%k==0) || (i%l==0) || (i%m==0) || (i%n==0)){
        freq[i]=1;
    }
}
int count=0;
for(int i=1;i<d+1;i++) {
    if(freq[i]==1)
    {
        // cout<<freq[i]<<" ";
        count++;
    }
}
cout<<count<<endl;
}
return 0;
}
