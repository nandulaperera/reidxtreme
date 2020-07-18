#include <iostream>

using namespace std;

int gcd(int a, int b) 
{ 
	if (a == 0) return b; 
	if (b == 0) return a; 
	
	// base case
	if (a == b) return a; 
	
	// a is greater
	if (a > b) return gcd(a-b, b); 
	else return gcd(a, b-a); 
} 
   
int main() { 

    int t; //No of test cases
    cin >> t;
    int a[t], b[t];
    for(int i=0; i<t; i++){
       cin >> a[i] >> b[i];
    }
    for(int i=0; i<t; i++){
        cout << gcd(a[i], b[i]) << endl;
    }
    return 0; 
} 
