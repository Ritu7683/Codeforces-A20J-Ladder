#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
string s;
cin>>s;
vector<int> v;
for(int i=0;i<s.length();i++)
{
    if(s[i]!='+')
    {
        v.push_back(s[i]-'0');
    }
}
sort(v.begin(),v.end());
int i=0;
for(;i<v.size()-1;i++){
    cout<<v[i]<<"+";
}
cout<<v[i]<<endl;
return 0;
}
