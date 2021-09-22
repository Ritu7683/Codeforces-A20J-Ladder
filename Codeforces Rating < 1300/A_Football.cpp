#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
ll n;
cin>>n;
unordered_map<string, int> m;
unordered_map<string, int>::iterator it;
string s;
while(n--){
    cin>>s;
    m[s]++;
}
int max=INT_MIN;
string ans;
for(it=m.begin(); it!=m.end();it++){
    if(it->second>max){
        ans=it->first;
        max=it->second;
    }
}
cout<<ans<<endl;
return 0;
}