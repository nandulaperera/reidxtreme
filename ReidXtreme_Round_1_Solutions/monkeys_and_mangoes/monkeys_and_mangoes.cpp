#include <bits/stdc++.h> 
#include <iostream>

#define N 100005
using namespace std; 


// To store vertices and value of k 
long int n, k; 
vector<long int> gr[N]; 
// To store number vertices at a level i 
long int d[N][500]; 

// To store the final answer 
long int ans = 0; 

// Function to add an edge between two nodes 
void Add_edge(int x, int y) 
{ 
    gr[x].push_back(y); 
    gr[y].push_back(x); 
} 

// Function to find the number of distinct 
// pairs of the vertices which have a distance 
// of exactly k in a tree 
void dfs(int v, int par) 
{ 
    // At level zero vertex itself is counted 
    d[v][0] = 1; 
    for (auto i : gr[v]) { 
        if (i != par) { 
            dfs(i, v); 

            // Count the pair of vertices at 
            // distance k 
            for (int j = 1; j <= k; j++) 
                ans += d[i][j - 1] * d[v][k - j]; 

            // For all levels count vertices 
            for (int j = 1; j <= k; j++) 
                d[v][j] += d[i][j - 1]; 
        } 
    } 
} 
// Driver code 
int main() 
{ 

    long int a,b;

    cin>>n;
    cin>>k;
    for(int j=0;j<n-1;j++){
        cin>>a;
        cin>>b;
        Add_edge(a,b);
        
    }
    // Function call 
    dfs(1, 0); 


    // Required answer 
    cout << ans; 

    return 0; 
}