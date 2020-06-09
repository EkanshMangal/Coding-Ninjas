Discrepancies in the Voters List

CODECHEF- VOTERS

#include<bits/stdc++.h>
using namespace std;
vector<int> getVoters(int arr[], int n)
{
    int i;
    sort(arr,arr+n);
    vector<int> vector1;
    unordered_map<int,int>map1;
    for(i=0;i<n;i++)
    {
        map1[arr[i]]+=1;
    }
    unordered_map<int,int>:: iterator it;
    for(it=map1.begin();it!=map1.end();it++)
    {
        if(it->second > 1)
        {
            vector1.push_back(it->first);
        }
    }
    sort(vector1.begin(),vector1.end());
    return vector1;
}
int main()
{
    int l,m,n;
    cin>>l>>m>>n;
    int i,j=l+m+n;
    int arr[j];
    for(i=0;i<j;i++)
    {
        cin>>arr[i];
    }
    std::vector<int>voters=getVoters(arr,j);
    cout<<voters.size()<<endl;
    for(i=0;i<voters.size();i++)
    {
        cout<<voters[i]<<endl;
    }
    
}