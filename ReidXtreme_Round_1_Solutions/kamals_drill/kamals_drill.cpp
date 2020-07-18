#include <iostream>
using namespace std;

int main(){
    int n, m, start, i;
    cin >> n >> m;
    
    int arr[n];

    // Scanning the initial array.
    for (i = 0; i  < n; i++)
        cin >> arr[i];
    
    // Identifying the start of the array after m rotations were performed.
    start = m % n;
    
    // Displaying the final array treating the array as a circular queue.
    for(i = 0; i < n; i++){
        cout << arr[(start+i)%n] << ' ';
    }
    
    return 0;
}
