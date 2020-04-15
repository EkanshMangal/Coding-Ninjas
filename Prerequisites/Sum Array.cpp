/*
Sum Array
Given a 2-d square matrix of order ‘n’, find the sum of elements of both diagonals and all boundaries elements. Boundary elements refer to the elements present on all the four boundaries of matrix.
Input:
First line will have a single integer ‘n’ denoting the order of matrix.
Next ‘n’ lines will have ‘n’ space separated integers each denoting the elements of matrix.
Constraints:
1<=n<=100
Output:
Print a single integer denoting the sum.
Sample input:
3
1 2 3
4 5 6
7 8 9
Sample Output:
45
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,sum=0;
    cin>>n;
    int arr[n+2][n+2];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>arr[i][j];
            if(i==1 || j==1)
            {
                sum=sum+arr[i][j];
                
            }
            if(i==n || j==n)
            {
                if(i!=1 && j!=1)
                {
                    sum=sum+arr[i][j];
                }
            }
            if(i==j || i+j==n+1)
            {
                if(i!=1 && i!=n)
                {
                    sum=sum+arr[i][j];
                }
            }
        }
    }
    cout<<sum;
}
