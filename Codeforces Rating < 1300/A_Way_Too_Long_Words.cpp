#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int t;
cin>>t;
while(t--) {
    string s;
    cin>>s;
    int count=0;
    int size=s.length();
    if(s.length()>10)
    {
        for(int i=1;i<s.length()-1;i++){
            count++;
        }
        cout<<s[0]<<count<<s[size-1]<<endl;
    }
    else{
        cout<<s<<endl;
    }
}
return 0;
}
