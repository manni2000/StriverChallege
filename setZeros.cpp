#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();    // total no of matrix
	int m = matrix[0].size(); // first line of rows

	set<int>r,c;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
               r.insert(i);
			   c.insert(j);
			}
		}
	}

	for(int i:r){
           for(int j=0;j<m;j++){
			   matrix[i][j]=0;
		   }
		}
	for(int j:c){
           for(int i=0;i<n;i++){
			   matrix[i][j]=0;
		   }
		}
}