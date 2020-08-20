// CPP program to implement traveling salesman 
// problem using naive approach. 
#include <bits/stdc++.h>

using namespace std; 

  
// driver program to test above function 
int main() { 
    // matrix representation of graph
    
    int city;
    int distance;
    int cost_per_km = 1;
    cin>>city;
    cin>>cost_per_km;
    int graph[city][city];
    for(int i =0;i<city;i++){
        for(int j =0;j<city;j++){
            cin>>distance;
            graph[i][j] = distance;
        }
    }
    int s = 0; 
    
    ////////////////
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
  
    /////////////
    cout << min_path*cost_per_km << endl; 
    return 0; 
}
