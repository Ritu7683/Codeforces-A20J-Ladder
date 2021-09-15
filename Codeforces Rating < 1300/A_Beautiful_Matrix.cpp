#include <bits/stdc++.h>
using namespace std;


int count_steps(int arr[][5], int m, int n)
{
    int count=0;
    if(arr[2][2]==1)
    {
        return count;
    }
    else
    {
        while(m!=2 || n!=2)
        {
            if(m<2)
            {
                for(int i=m;i<2;i++){
                    for(int j=0;j<n;j++){
                        swap(arr[i][j],arr[i+1][j]);
                    }
                }
                count++;
                m++;
            }
            else if(m>2)
            {
                for(int i=m;i>2;i--){
                    for(int j=0;j<n;j++){
                        swap(arr[i][j],arr[i-1][j]);
                    }
                }
                count++;
                m--;
            }
            else if(n<2){
                for(int i=0;i<n;i++){
                    for(int j=n;j<2;j++){
                        swap(arr[i][j],arr[i][j+1]);
                    }
                }
                count++;
                n++;
            }
            else if(n>2)
            {
                for(int i=0;i<n;i++){
                    for(int j=n;j>2;j--){
                        swap(arr[i][j],arr[i][j-1]);
                    }
                }
                count++;
                n--;
            }
        }
    return count; 
    }
    
}
int main() {

int arr[5][5];
int m=0;
int n=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>arr[i][j];
        if(arr[i][j]==1){
            m=i;
            n=j;
        }
    }
}
int x=count_steps(arr,m,n);
cout<<x<<endl;
return 0;
}