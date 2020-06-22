/*
Inversion Count
Let A[0 ... n-1] be an array of n distinct positive integers. If i < j and A[i] > A[j] then the pair (i, j) is called an inversion of A (where i and j are indexes of A). Given an integer array A, your task is to find the number of inversions in A.
Input format :
Line 1 : n, array size
Line 2 : Array elements (separated by space).
Output format :
Count of inversions
Constraints :
1 <= n <= 10^5
1 <= A[i] <= 10^9
Sample Input 1 :
3
3 2 1
Sample Output 1 :
3
Sample Input 2 :
5
2 5 1 3 4
Sample Output 1 :
4
*/

long long merge(int A[],int start,int mid, int end)
{
    long long count=0;
    int temp[end-start+1];
    int i=start,j=mid,k=0;
    while(i<mid && j<=end)
    {
        if(A[i]<=A[j])
        {
            temp[k++]=A[i++];
		}
        else
        {
            temp[k++]=A[j++];
            count+=mid-i;
        }
	}
    while(i<mid)
    {
        temp[k++]=A[i++];
    }
    while(j<=end)
    {
        temp[k++]=A[j++];
    }
    for(i=start,k=0;i<=end;i++,k++)
    {
        A[i]=temp[k];
    }
    return count;
}
long long mergeSort(int A[],int start,int end)
{
    long long count=0;
    if(end>start)
    {
        int mid=(end+start)/2;
        long long lcount=mergeSort(A,start,mid);
        long long rcount=mergeSort(A,mid+1,end);
        long long mcount=merge(A,start,mid+1,end);
        return lcount+rcount+mcount;
    }
    return count;
}
long long solve(int A[], int n)
{
	// Write your code here.
	long long count=mergeSort(A,0,n-1);
	// cout<<count;
    return count;
}


