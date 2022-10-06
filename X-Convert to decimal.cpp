#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;

for(int i=1;i<=t;i++)
{
    int cntr=0;
    int n;
    cin>>n;
    while(n!=0)
    {
        int digit=n%2;
        if(digit==1)
        {
            cntr++;
        }
        n/=2;
    }
    int p=0;
    int dec=0;
    for(int k=1;k<=cntr;k++)
    {
        dec+=(1*pow(2,p));
        p++;
    }
    cout<<dec<<endl;

}
}
