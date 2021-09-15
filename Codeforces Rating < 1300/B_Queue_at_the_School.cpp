#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int t,n;
cin>>n>>t;
string s;
cin>>s;
while (t--) {
    for(int i=0;i<n-1;i++){
        if(s[i]=='B' && s[i+1]=='G')
        {
            swap(s[i],s[i+1]);
            i++;
        }
    }    
}
cout<<s<<endl;
return 0;
}
