#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();	  // returns the number of rows in the matrix, which is 2.
	int m = matrix[0].size(); // returns the number of columns in the matrix, which is 3.

	set<int> r, c;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] == 0) // matrix[1][2]==0
			{
				r.insert(i); // r = 1
				c.insert(j); // c = 2
			}
		}
	}

	for (int i : r)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = 0; // matrix[1][0] = matrix[1][1] = matrix[1][2] = 0
		}
	}
	for (int j : c)
	{
		for (int i = 0; i < n; i++)
		{
			matrix[i][j] = 0; // matrix [0][2] = 0
		}
	}
}

int main()
{
	vector<vector<int>> matrix = {
		{1, 2, 3},
		{4, 0, 6}};

	cout << "Before setting zeros:" << endl;
	for (auto row : matrix)
	{
		for (int num : row)
		{
			cout << num << " ";
		}
		cout << endl;
	}

	setZeros(matrix);

	cout << "After setting zeros:" << endl;
	for (auto row : matrix)
	{
		for (int num : row)
		{
			cout << num << " ";
		}
		cout << endl;
	}

	return 0;
}

// TC-