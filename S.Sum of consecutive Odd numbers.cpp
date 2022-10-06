#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int x,y,t,i;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int sum=0;
        if(x<y)
        {
            if((x%2)==0)
            {
                for(i=(x+1); i<y; i=(i+2))
                {
                    sum=sum+i;
                }
                cout<<sum<<endl;
            }
            if((x%2)!=0)
            {
                for(i=(x+2); i<y; i=(i+2))
                {

                    sum=sum+i;
                }
                cout<<sum<<endl;
            }
        }
        else if(x>y)
        {
            sum=0;
            if((y%2)==0)
            {
                for(i=(y+1); i<x; i=(i+2))
                {

                    sum=sum+i;
                }
                cout<<sum<<endl;
            }
            if((y%2)!=0)
            {

                for(i=(y+2); i<x; i=(i+2))
                {

                    sum=sum+i;
                }
                cout<<sum<<endl;
            }
        }
        else if(x==y)
        {
            sum=0;
            cout<<sum<<endl;
        }
    }
}
