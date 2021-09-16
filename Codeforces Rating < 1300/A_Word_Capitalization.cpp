#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
string s;
cin>>s;
if(s[0]>='a' && s[0]<='z') {
    s[0]=toupper(s[0]);
    cout<<s<<endl;
}
else
{
    cout<<s<<endl;
}

return 0;
}