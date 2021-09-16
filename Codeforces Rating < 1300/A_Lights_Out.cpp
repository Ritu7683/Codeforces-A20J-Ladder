#include <bits/stdc++.h>
#define ll long int
using namespace std;

int main() {
//fast input-output
cin.sync_with_stdio(0);
int a[3][3];
//Getting input matrix
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cin>>a[i][j];
    }
}
//Initally all the switches are on
int sum;
    int b[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
            if(i==0 && j==0)
            {
                sum=a[i][j]+a[i+1][j]+a[i][j+1];
            } 
            else if(i==0)
            {
                if(j==2)
                {
                    sum=a[i][j]+a[i][j-1]+a[i+1][j];
                }
                else{
                     sum=a[i][j]+a[i][j-1]+a[i+1][j]+a[i][j+1];
                }
                
            }
            else if(j==0)
            {
                if(i==2)
                {
                    sum=a[i][j]+a[i-1][j]+a[i][j+1];
                }
                else{
                    sum=a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j+1];
                }
                
            }
            else if(i==2 && j==2)
            {
                sum=a[i][j]+a[i-1][j]+a[i][j-1];
            }
            else if(i==2 )
            {
                if(j==0)
                {
                    sum=a[i][j]+a[i-1][j]+a[i][j+1];
                }
                else{
                    sum=a[i][j]+a[i-1][j]+a[i][j-1]+a[i][j+1];
                }  
            }
            else if(j==2)
            {
               sum=a[i][j]+a[i-1][j]+a[i][j-1]+a[i+1][j];
            }
            else{
                sum=a[i][j]+a[i-1][j]+a[i][j-1]+a[i+1][j]+a[i][j+1];
            }

            b[i][j]=sum;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(b[i][j]%2==0)
            {
                b[i][j]=1;
            } 
            else{
                b[i][j]=0;
            }
        }
       
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
       
    }
return 0;
}
