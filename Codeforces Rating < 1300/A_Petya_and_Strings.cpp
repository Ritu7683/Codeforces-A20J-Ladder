#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
string s;
cin>>s;
string v;
cin>>v;
for(int i=0;i<s.length();i++){
    if(s[i]<97){
        s[i]+=32;
    }
    if(v[i]<97){
        v[i]+=32;
    }
}
if(s<v){
    cout<<"-1"<<endl;
}
else if(s>v){
    cout<<"1"<<endl;
}
else{
    cout<<"0"<<endl;
}
return 0;
}
