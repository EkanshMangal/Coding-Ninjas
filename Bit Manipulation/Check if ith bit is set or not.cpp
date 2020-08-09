#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n>>i;
    int z;
    z= n & (1<<i);
   // z= n & int(pow(2,i));  
    if(z==0)
    {
        cout<<"UNSET";
    }
    else
    {
        cout<<"SET";
    }
}