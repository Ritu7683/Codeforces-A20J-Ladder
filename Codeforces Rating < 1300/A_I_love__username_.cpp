#include <bits/stdc++.h>
#define ll long int
using namespace std;
int findmax(int i,int n,int arr[])
{
    int maxele=arr[0];
    for(int i=0;i<=n;i++){
        if(arr[i]>maxele){
            maxele=arr[i];
        }
    }
    return maxele;
}
int findmin(int i,int n,int arr[])
{
    int minele=arr[0];
    for(int i=0;i<=n;i++){
        if(arr[i]<minele){
            minele=arr[i];
        }
    }
    return minele;
}
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) {
    cin>>arr[i];
}
int count=0;
int freq[10000]={0};
freq[arr[0]]++;
for(int i=1;i<n;i++) {
    int max=findmax(0,i,arr);
    int min=findmin(0,i,arr);
    //cout<<max<<" "<<min<<endl;
    freq[arr[i]]++;
    if((arr[i]==max || arr[i]==min) && freq[arr[i]]==1)
    {
        count++;
    }
}
cout<<count<<endl;
return 0;
}
