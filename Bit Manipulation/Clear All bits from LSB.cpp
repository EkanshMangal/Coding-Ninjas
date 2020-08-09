#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n>>i;
    int m= ~((1<<(i+1))-1);
    cout<<n&m;
}