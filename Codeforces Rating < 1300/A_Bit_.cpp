#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int n;
cin>>n;
int x=0;
while(n--){
    char s[3];
    for(int i=0;i<3;i++){
        cin>>s[i];
    }
    if(s[0]=='+' && s[1]=='+'){
        ++x;
    }
    if(s[1]=='+' && s[2]=='+'){
        x++;
    }
    if(s[0]=='-' && s[1]=='-'){
        --x;
    }
    if(s[1]=='-' && s[2]=='-'){
        x--;
    }
}
cout<<x<<endl;
return 0;
}
