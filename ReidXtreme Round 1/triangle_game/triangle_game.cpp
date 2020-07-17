// Triangle Game

#include <bits/stdc++.h> 

using namespace std; 
  
struct point { 
    int x, y; 
    point() {} 
    point(int x, int y) 
        : x(x), y(y) 
    { 
    } 
}; 
  
// Utility method to return square of x 
int square(int x) 
{ 
    return x * x; 
} 
  
// Utility method to sort a, b, c; after this 
// method a <= b <= c 

int collinear(int arr[6]){ 
    
    //int a = x1 * (y2 - y3) + x2 * (y3 - y1) +  x3 * (y1 - y2); 
  	int b = arr[0]*(arr[3]-arr[5]) + arr[2]*(arr[5]-arr[1]) + arr[4]*(arr[1]-arr[3]);
    if (b==0) 
        return 1;
    else
        return 0; 
} 

void order(int& a, int& b, int& c) 
{ 
    int copy[3]; 
    copy[0] = a; 
    copy[1] = b; 
    copy[2] = c; 
    sort(copy, copy + 3); 
    a = copy[0]; 
    b = copy[1]; 
    c = copy[2]; 
} 
  
// Utility method to return Square of distance between two points 
int euclidDistSquare(point p1, point p2) 
{ 
    return square(p1.x - p2.x) + square(p1.y - p2.y); 
} 
  
// Method to classify side 
string getSideClassification(int a, int b, int c) 
{ 
    // if all sides are equal 
    if (a == b && b == c) 
        return "Equilateral"; 
  
    // if any two sides are equal 
    else if (a == b || b == c) 
        return "Isosceles"; 
  
    else
        return "Scalene"; 
} 
  
// Method to classify angle 
string getAngleClassification(int a, int b, int c) 
{ 
    // If addition of sum of square of two side 
    // is less, then acute 
    if (a + b > c) 
        return "Acute"; 
  
    // by pythagoras theorem 
    else if (a + b == c) 
        return "Right"; 
  
    else
        return "Obtuse"; 
} 
  
// Method to classify the triangle by sides and angles 
void classifyTriangle(point p1, point p2, point p3){ 
    // Find squares of distances between points 
    int a = euclidDistSquare(p1, p2); 
    int b = euclidDistSquare(p1, p3); 
    int c = euclidDistSquare(p2, p3); 
  
    // Sort all squares of distances in increasing order 
    order(a, b, c); 
  
    cout << "Triangle is type of "+ getAngleClassification(a, b, c) + " and angle of "+ getSideClassification(a, b, c) << endl; 
} 
  
// Driver code 
int main(){ 
	
	int n;
	point p1,p2,p3;
	int arr[6];
	cin>>n;
	for(int i =0;i<n;i++){
		for(int j =0;j<6;j++){
			cin>>arr[j];
		}
		p1 = point(arr[0],arr[1]);
		p2 = point(arr[2],arr[3]);
		p3 = point(arr[4],arr[5]);
		if(collinear(arr)){
			cout<<"Collinear Triangle"<<endl;
		}else{
			classifyTriangle(p1,p2,p3);	
		}
		
	}
    return 0; 
} 
