/*
Merge Sort Code
Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)
Output format :
Array elements in increasing order (separated by space)
Constraints :
1 <= n <= 10^3
Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
Sample Input 2 :
5
2 1 5 2 3
Sample Output 2 :
1 2 2 3 5 
*/

#include<bits/stdc++.h>
using namespace std;
void merge(int input[], int start, int mid, int end)
{
    int i=start,j=mid,k=0;
    int temp[end-start+1];
    while(i<mid && j<=end)
    {
        if(input[i]<=input[j])
        {
            temp[k++]=input[i++];
        }
        if(input[j]<input[i])
        {
            temp[k++]=input[j++];
        }
        
    }
    while(i<mid)
    {
        temp[k++]=input[i++];
    }
    while(j<=end)
    {
        temp[k++]=input[j++];
    }
    for(i=start,k=0;i<=end;i++,k++)
    {
        input[i]=temp[k];
	}
    return;
}
void mergesort1(int input[],int start, int end)
{
  
    if(end>start)
    {
          int mid=(start+end)/2;
  		mergesort1(input,start,mid);
        mergesort1(input,mid+1,end);
        merge(input,start,mid+1,end);
    }
    else
    {
        return;
    }
}
void mergeSort(int input[], int size){
	// Write your code here
    return mergesort1(input,0,size-1);
}
// int main()
// {
//     int size;
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     mergeSort(arr,size);
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i];
//     }
// }
