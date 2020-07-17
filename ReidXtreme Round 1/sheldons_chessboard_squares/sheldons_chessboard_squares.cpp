//Sheldon's Box Chessboard

#include <bits/stdc++.h> 
using namespace std; 
  
long long int countSquares(unsigned long long int n){ 
    // A better way to write n*(n+1)*(2n+1)/6 
    return (n * (n + 1) / 2) * (2*n + 1) / 3; 
} 
int count_square(unsigned long long int n){ 
  
    // To store the required count 
    unsigned long long int count = 0; 
  
    // For all odd values of i 
    for (long i = 1; i <= n; i = i + 2) { 
  
        // Add the count of possible squares of length i 
        unsigned long long int k = n - i + 1; 
        count += (k * k); 
    } 
  
    // Return the required count 
    return count; 
} 
  
// Driver code 
int main() { 
    unsigned long long int N;
    cin>>N;
	unsigned long long int a = (N*N)/2;
	cout<< countSquares(N)<<endl;
    cout << count_square(N)<<endl;
    if(N%2 == 0){
    	cout << a <<" "<< a;
	}else{
		cout<< a<<" "<<a+1;
	}
	
  
    return 0; 
} 
