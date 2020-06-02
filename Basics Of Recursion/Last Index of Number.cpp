/*
Last Index of Number
Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. Return -1 if it is not present in the array.
Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
You should start traversing your array from 0, not from (N - 1).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
last index or -1
Constraints :
1 <= N <= 10^3
Sample Input :
4
9 8 10 8
8
Sample Output :
3

*/




#include <bits/stdc++.h>
using namespace std;

int ansMatrix(int input[], int size, int x, int oriSize,int count,int flag)
{
    
    if(size==0)
    {
        if(flag==0)
        {
            return -1;
        }
        return count;
    }
    if(input[0]==x)
    {
        if(oriSize-size>count)
        {
            count=oriSize-size;
            flag=1;
        }
	}
    return ansMatrix(input+1,size-1,x,oriSize,count,flag);
    
}

int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    
    int flag=0;
    int count=0;
    int oriSize=size;
	return ansMatrix(input,size,x,oriSize,count,flag);    
}


/*

int main()
{
    int size,x;
    cin>>size;
    int input[size];
    for(int i=0;i<size;i++)
    {
        cin>>input[i];
    }
    cin>>x;
    cout<<lastIndex(input,size,x);
}
*/

