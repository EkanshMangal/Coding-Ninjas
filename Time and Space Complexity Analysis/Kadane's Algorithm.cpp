
// to find largest sum of subarray 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_so_far=0;
    int best_so_far=0;
    int i=0;
    for(i=0;i<n;i++)
    {
        max_so_far+=arr[i];
        if(max_so_far<0)
        {
            max_so_far=0;
        }
        if(max_so_far>0)
        {
            best_so_far=max(max_so_far,best_so_far);
        }
    }
    cout<<best_so_far;
}