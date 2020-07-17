#include <iostream>

using namespace std;

void sort(int*, int);

int main(){
	
	//Number of test cases
	int t;
	cin>>t;
	
	for(int i = 0; i < t; i++){
		//Order of the square matrix
		int n;
		cin>>n;
		
		int elements[n*n]={0};
		//Store the elements in a 1D array
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				cin>>elements[(n*j)+k];
			}
		}
		
		//Sort the array any preferred sorting algorithm
		sort(elements, n);
		
		int matrix[n][n] = {0};
		
		int count = 0;
		int col1 = 0 ,col2 = n-1,row1 = 0,row2 = n-1;
	    while(count < (n*n)){
	    	for(int j = col2; j >= col1; j--)
	            matrix[row2][j] = elements[count++];
	            
	        for(int k = row2 - 1; k >= row1; k--)
	            matrix[k][col1] = elements[count++];
	            
	        for(int j = col1 + 1; j <= col2; j++)
	            matrix[row1][j] = elements[count++];
	            
	        for(int k = row1 + 1; k <= row2 - 1; k++)
	            matrix[k][col2] = elements[count++];
	            
	        col1++;
	        col2--;
	        row1++;
	        row2--;
	    }
		
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				cout<<matrix[j][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}

void sort(int* array, int n){
	//Bubble sort algorithm
	for(int j = 0; j <n*n; j++){
		for(int k = 0; k<(n*n) - 1; k++){
			if(array[k] > array[k+1]){
				int temp = array[k];
				array[k] = array[k+1];
				array[k+1] = temp;
			}
		}
	}
}
