#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int n;
cin>>n;
int arr[n];
for(int i=1;i<=n;i++)
{
    arr[i]=i; 
}
if(n%2!=0)
{
    cout<<"-1";
}
else
{
    for(int i=1;i<=n-1;i++)
    {
        if(arr[i]==i)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
return 0;
}