#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
string s;
cin>>s;
for(int i=0;s[i]!='\0';i++) {
    if(s[i]=='.')
    {
        cout<<"0";
    }
    else if(s[i]=='-' && s[i+1]=='.')
    {
        cout<<"1";
        i++;
    }
    else if(s[i]=='-' && s[i+1]=='-')
    {
        cout<<"2";
        i++;
    }
}
return 0;
}
