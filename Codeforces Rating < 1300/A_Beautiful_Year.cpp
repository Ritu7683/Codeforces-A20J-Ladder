#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
int y;
cin>>y;
while(y) {
    y+=1;
    int n=y;
    int a=n%10;
    n=n/10;
    int b=n%10;
    n=n/10;
    int c=n%10;
    n=n/10;
    int d=n%10;
    n=n/10;
    if(a!=b && a!=c && a!=d && b!=a && b!=c && b!=d && c!=a && c!=b && c!=d && d!=a && d!=b && d!=c)
    {
        cout<<y<<endl;
        break;
    }
}
return 0;
}
