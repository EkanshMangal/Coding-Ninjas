Problem Name: Equalize

Link: http://codeforces.com/contest/1037/problem/C

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i;
    string str1, str2;
    cin>>n>>str1>>str2;
    for(i=0;i<n;i++)
    {

        if(str1[i]!=str2[i])
        {
            if(i+1<n && (str1[i+1]!=str1[i] && str2[i+1]!=str1[i+1]))
            {
                swap(str1[i+1],str1[i]);
                count++;
            }
            else
            {
                str1[i]=str2[i];
                count++;
            }
        }
    }
    cout<<count;
}