#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(1)
    {
        cin>>n>>m;
        if(n<=0||m<=0)

            break;
            int minn=min(n,m);
            int maxx=max(n,m);
            int sum=0;
            for(int i=minn;i<=maxx;i++)
            {
                cout<<i<< " ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
    }
    return 0;

}
