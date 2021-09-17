#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int isprime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){return 0;}
    }
    return 1;
}

string istrue(int n,int m)
{
    for(int i=n+1;i<m;i++){
        int ans=isprime(i);
        if(ans==1)
        {
            return "NO";
        }
    }
    int y=isprime(m);
    if(y==1){return "YES";}
    else{return "NO";}
}
int main() {
int n,m;
cin>>n>>m;
cout<<istrue(n,m)<<endl;
return 0;
}