#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
string s;
cin>>s;
string v;
cin>>v;
string str = v;
cin>>str;
if(v.size()+s.size()>str.size()){
    cout<<"NO"<<endl;
}
else{
    int freq[26]={0};
    for(int i=0;i<s.length();i++) {
        freq[s[i]-'A']++;
    }
    for(int i=0;i<v.length();i++) {
        freq[v[i]-'A']++;
    }
    for(int i=0;i<str.length();i++) {

        freq[str[i]-'A']--;
    }
    int flag=0;
    for(int i=0;i<26;i++) {

        if(freq[i]!=0){
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

return 0;
}
