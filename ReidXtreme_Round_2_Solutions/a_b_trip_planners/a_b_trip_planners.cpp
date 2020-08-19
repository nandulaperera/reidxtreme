// CPP program to implement AB Trip Planners
// problem using naive approach.
// greedy solution or dynamic solution gives better results 
#include <bits/stdc++.h> 
#include <vector>
using namespace std; 
  
// driver program to test above function 
int main() { 
    
    
	int city,distance,cost_per_km = 1;//init value
	int graph[city][city];
	
	cin>>city;
	cin>>cost_per_km;
	
	
	//input values
	for(int i =0;i<city;i++){
		for(int j =0;j<city;j++){
			cin>>distance;
			graph[i][j] = distance;
		}
	}
	int s = 0; 
    // start travelling
    // store all vertex apart from source vertex 
    vector<int> vertex; 
    for (int i = 0; i < city; i++) 
        if (i != s) 
            vertex.push_back(i); 
  
    // store minimum weight Hamiltonian Cycle. 
    int min_path = INT_MAX; 
    do { 
  
        // store current Path weight(cost) 
        int current_pathweight = 0; 
          
        // compute current path weight 
        int k = s; 
        for (int i = 0; i < vertex.size(); i++) { 
            current_pathweight += graph[k][vertex[i]]; 
            k = vertex[i]; 
        } 
        current_pathweight += graph[k][s]; 
  
        // update minimum 
        min_path = min(min_path, current_pathweight); 
         
    } while (next_permutation(vertex.begin(), vertex.end())); 
  
	
    cout << min_path*cost_per_km << endl; 
    return 0; 
} 
