#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int n;
cin>>n;
int arr[n];
for(int i=1;i<=n;i++) {
    cin>>arr[i];
}
int max=arr[1];
int count=0;
int i_max=0;
int i_min=0;
for(int i=1;i<=n;i++)
{
    if(arr[i]>max){
        max=arr[i];
        i_max=i;
    }
}
for(int i=i_max;i>1;i--){
    swap(arr[i],arr[i-1]);
    count++;
}
int min=arr[1];
for(int i=1;i<=n;i++)
{
    if(arr[i]<=min){
        min=arr[i];
        i_min=i;
    }
}
for(int i=i_min;i<n;i++){
    swap(arr[i],arr[i+1]);
    count++;
}
cout<<count<<endl;
return 0;
}