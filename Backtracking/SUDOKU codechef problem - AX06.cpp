SUDOKU codechef problem - AX06
https://www.codechef.com/problems/AX06

#include<bits/stdc++.h>
using namespace std;
#define n 9

bool emptyLocation(int grid[n][n], int& row, int& col){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]==0){
                row=i;
                col=j;
                return true;
            }
        }
    }
    return false;
}
bool isSafeInGrid(int grid[n][n], int row, int col, int num){
    int rowFactor=row-(row%3);
    int colFactor=col-(col%3);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(grid[i+rowFactor][j+colFactor]==num)
            return false;
        }
    }
    return true;
}
bool isSafeInColumn(int grid[n][n], int col, int num){
    for(int i=0; i<n; i++){
        if(grid[i][col]==num)
        {
            return false;
        }
    }
    return true;
}
bool isSafeInRow(int grid[n][n], int row, int num){
    for(int i=0; i<n; i++){
        if(grid[row][i]==num)
        return false;
    }
    return true;
}
bool isSafe(int grid[n][n], int row, int col, int num){
    if(isSafeInRow(grid,row,num) && isSafeInColumn(grid,col,num) && isSafeInGrid(grid,row,col,num))
    return true;
    
    return false;
}
bool solveSudoku(int grid[n][n]){
    int row, col;
    if(!emptyLocation(grid,row,col)){
        return true;
    }
    
    for(int i=1; i<=n; i++){
        if(isSafe(grid, row, col, i)){
            grid[row][col]=i;
            if(solveSudoku(grid)){
                return true;
            }
            grid[row][col]=0;
        }
    }
    return false;
}

int main(){
    int grid[n][n];
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        
        for(int j=0; j<n; j++){
            grid[i][j]=s[j]-'0';
        }
    }
    solveSudoku(grid);
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<grid[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
}



/*
#include <iostream>
#include <stdio.h>
#define UNASSIGNED 0
#define N 9
using namespace std;

bool FindUnassignedLocation(int grid[N][N], int &row, int &col); // To check if there is any unassaigned location in the sudoku
bool isSafe(int grid[N][N], int row, int col, int num); // To check if the value-filled is suitable or not
void printGrid(int grid[N][N]);
bool SolveSudoku(int grid[N][N]){
//	printGrid(grid);
	int row, col, num;
	if(!FindUnassignedLocation(grid, row, col))
	 return true;

	for(num=1;num<=9;num++)
	{
		if(isSafe(grid,row,col,num)){
		grid[row][col]=num; // tentative assignment
		if(SolveSudoku(grid)) return true; // successful
		grid[row][col]=UNASSIGNED;
	}
	}
	return false; // This triggers back tracking
}
bool FindUnassignedLocation(int grid[N][N], int &row, int &col){
	for(row=0;row<N;row++)
		for(col=0;col<N;col++)
			if(grid[row][col]==UNASSIGNED)
				return true;

	return false;
}
bool UsedInRow(int grid[N][N], int row, int num){
	for(int col=0;col<N;col++)
		if(grid[row][col]==num)
			return true;
	return false;
}
bool UsedInCol(int grid[N][N], int col, int num){
	for(int row=0;row<N;row++)
		if(grid[row][col]==num)
			return true;
	return false;
}
bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num){
	for(int row=0;row<3;row++)
		for(int col=0;col<3;col++)
			if(grid[row+boxStartRow][col+boxStartCol]==num)
				return true;

	return false;
}

bool isSafe(int grid[N][N], int row, int col, int num){
	return (!UsedInRow(grid, row, num)&& !UsedInCol(grid, col, num)&& !UsedInBox(grid, row-row%3, col-col%3, num));
}

void printGrid(int grid[N][N]){
	for(int row=0;row<N;row++){
		for(int col=0;col<N;col++)
			printf("%2d", grid[row][col]);
		printf("\n");
	}
}

int main(){
	int grid[9][9];
	for(int row=0; row<9; row++){
		for(int col=0; col<9; col++ ){
			cin>>grid[row][col];
		}
	}
	if(SolveSudoku(grid)==true)
		printGrid(grid);
	return 0;
}

*/