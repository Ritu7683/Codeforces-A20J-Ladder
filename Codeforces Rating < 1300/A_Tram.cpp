#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int n;
cin>>n;
int arr1[1000];
int arr2[1000];
for(int i=0;i<n;i++) {
    cin>>arr1[i]>>arr2[i];
}
int max_cap=0;
int curr_cap;
int prev_cap=0;
for(int i=0;i<n;i++) {
    curr_cap=prev_cap+arr2[i]-arr1[i];
    if(curr_cap>max_cap){
        max_cap=curr_cap;
    }
    prev_cap=curr_cap;
}
cout<<max_cap<<endl;
return 0;
}
