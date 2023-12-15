#include <stdio.h>
#include <stdlib.h>
// N is the size of the 2D matrix N*N
#define N 9
void print(int arr[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
}
int isSafe(int grid[N][N], int row,
					int col, int num)
{
	for (int x = 1; x <= 9; x++)
		if (grid[row][x] == num)
			return 0;
	for (int x = 1; x <= 9; x++)
		if (grid[x][col] == num)
			return 0;
	int startRow = row - row % 3,
				startCol = col - col % 3;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (grid[i + startRow][j +
						startCol] == num)
				return 0;
	return 1;
}
int solveSudoku(int grid[N][N], int row, int col)
{
	if (row == N - 1 && col == N)
		return 1;
	if (col == N)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] > 0)
		return solveSudoku(grid, row, col + 1);
	for (int num = 1; num <= N; num++)
	{	
		if (isSafe(grid, row, col, num)==1)
		{
			grid[row][col] = num;
			if (solveSudoku(grid, row, col + 1)==1)
				return 1;
		}
		grid[row][col] = 0;
	}
	return 0;
}
int main()
{
	// 0 means unassigned cells
	int grid[N][N] =   {   {7,2,6,3,5,9,4,1,8},
        {4,5,8,1,6,7,2,3,9},
        {9,1,3,8,2,4,7,6,5},
        {1,6,2,9,7,5,3,8,4},
        {3,9,4,2,8,5,1,5,7},
        {8,7,5,4,1,3,9,2,6},
        {5,3,7,6,4,1,8,9,2},
        {6,8,9,7,3,2,4,4,1 },
        {2,4,1,5,9,8,6,7,3}
    };

	if (solveSudoku(grid, 0, 0)==1)
		print(grid);
	else
		printf("No solution exists");
	return 0;
}