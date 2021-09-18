#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int n;
cin>>n;
int arr1[n];
int arr2[n];
int left_open=0;
int left_close=0;
int right_open=0;
int right_close=0;
for(int i=0;i<n;i++) {
    cin>>arr1[i]>>arr2[i];
    if(arr1[i]==1)
    {
        left_open++;
    }
    else if(arr1[i]==0)
    {
        left_close++;
    }
    if(arr2[i]==1)
    {
        right_open++;
    }
    if(arr2[i]==0)
    {
        right_close++;
    }
}
//cout<<left_open<<right_open<<left_close<<right_close;
int final=0;
if(left_open<=left_close)
{
    final+=left_open;
}
if(left_close<left_open)
{
    final+=left_close;
}
if(right_open<=right_close){
    final+=right_open;
}
if(right_close<right_open)
{
    final+=right_close;
}
cout<<final<<endl;
return 0;
}
