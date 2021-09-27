#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int n,m;
cin>>n>>m;
int arr[n];
for(int i=0;i<n;i++) {
    cin>>arr[i];
}

int ans[n];
for(int i=0;i<n;i++){
    if(arr[i]%m!=0){
        ans[i]=(arr[i]/m)+1;
    }
    else{
        ans[i]=arr[i]/m;
    }
}
int max=INT_MIN;
int result;
for(int i=0;i<n;i++){
    if(ans[i]>=max){
        max=ans[i];
        result=i;
    }
}
cout<<result+1<<endl;
return 0;
}
