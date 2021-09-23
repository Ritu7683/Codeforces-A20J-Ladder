#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
int n;
cin>>n;
unordered_map<int,int> m;
int x;
for(int i=1; i<=n; i++){
    cin>>x;
    m[x]=i;
}
int q;
cin>>q;
int k;
long long left=0;
long long right=0;
for(int i=1;i<=q;i++){
    cin>>k;
    left+=m[k];
    right+=(n-m[k])+1;
}
cout<<left<<" "<<right<<endl;
return 0;
}