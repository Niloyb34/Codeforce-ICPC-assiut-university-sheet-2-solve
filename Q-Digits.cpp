#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()

{
    char  arr[50];
    int t,i;
    cin>>t;
    while(t--)
    {
        cin>>arr;
        int len=strlen(arr);
        cout<<arr[len-1];
        for(i=(len-2); i>=0; i--)
        {

            cout<<" "<<arr[i];
        }
        cout<<endl;


    }


}

