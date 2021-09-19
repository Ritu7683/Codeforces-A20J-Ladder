#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int arr[5];
for(int i=0;i<4;i++) {
    cin>>arr[i];
}
sort(arr,arr+4);
int ans=3;
for(int i=1;i<4;i++){
    if(arr[i]!=arr[i-1]){
        ans--;
    }
}
cout<<ans<<endl;
return 0;
}
