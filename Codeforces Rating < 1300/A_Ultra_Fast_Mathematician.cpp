#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
string s,d;
cin>>s>>d;
vector<char> v;
int size=s.length();
int i=0;
while(i<size){
    if((s[i]=='0' && d[i]=='1') || (s[i]=='1' && d[i]=='0'))
    {
        v.push_back('1');
        cout<<v[i];
        i++;
    }
    else if ((s[i]=='0' && d[i]=='0') || (s[i]=='1' && d[i]=='1')){
        v.push_back('0');
        cout<<v[i];
        i++;
    }
    
}

return 0;
}