Problem NAme: Rectangular Area

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<int,int>height;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        for(int i=1;i<=(a/2);i++)
        {
            height[i]=max(height[i],b);
        }
    }
    map<int,int>::iterator it;
    int sum=0;
    for(it=height.begin();it!=height.end();it++)
    {
        sum=sum+it->second;
    }
    cout<<sum*2;
}