#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
string s;
cin>>s;
int freq[26]={0};
for(int i=0;i<s.length();i++){
    freq[s[i]-'a']++;
}
int count=0;
for(int i=0;i<26;i++){
    if(freq[i]>0){
        count++;
    }
}
if(count%2==0){
    cout<<"CHAT WITH HER!"<<endl;
}
else{
    cout<<"IGNORE HIM!"<<endl;
}
return 0;
}
