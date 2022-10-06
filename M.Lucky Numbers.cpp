#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int x,r,a,y,m,count=0;
    cin>>x>>y;
     m=x;
    for(a=x; a<=y; a++)
    {
        x=a;
        int f=1;
        while(x>0)
        {
            r=x%10;//7,7,4
            if(r!=4&&r!=7)
            {
                f=0;
            }
            x=x/10;//477/10=47/10=4/10=0
        }
        if(f==1)
        {
            cout<<a<<" ";
        }
        else if(f==0)
        {
            count++;
            if(count==(y-m+1))
            {
                cout<<"-1";
            }
        }
    }
}
