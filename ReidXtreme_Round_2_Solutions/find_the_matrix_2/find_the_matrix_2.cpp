#include <iostream>

using namespace std;

int main(){
	
	//Order of the matrix m x n (m - no. of rows, n - no. of columns)
	int m, n;
	cin>>m>>n;
	
	int matrix[m][n];
	
	//Store the elements in the matrix
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin>>matrix[i][j];
		}
	}
	
	int finalMatrix[m][n];
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			
			int min;
			
			if(i > 0){
				if(j > 0){
					
					int topDifference = matrix[i][j] - matrix[i-1][j];
					int leftDifference = matrix[i][j] - matrix[i][j-1];
					min = topDifference < leftDifference ? topDifference : leftDifference;
					
				}else{
					//If the element is in the first column of the matrix, the value is, the difference between the element and the element to the top of it
					min = matrix[i][j] - matrix[i-1][j];
				}
			}else{
				//If the element is in the first row of the matrix, the value is, the difference between the element and the element to the left of it
				if(j > 0){
					
					min = matrix[i][j] - matrix[i][j-1];
				
				}else{
					//If the element is in the first element of the matrix i.e, i = 0, j = 0
					min = matrix[i][j];
				}
			}
			finalMatrix[i][j] = min;
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout<<finalMatrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
