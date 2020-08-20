#include <bits/stdc++.h> 
#include <iostream>
#include <string>
#include <ctime>
#include <iostream>
#include <fstream>
#include <vector>


using namespace std; 


long int findKMin(vector<long int> &arr, long int n,long int k) 
{ 

    std::deque<long int> Qi(k); 

    long int i; 
    for (i = 0; i < k; ++i) { 

        while ((!Qi.empty()) && 
            arr[i] >= arr[Qi.back()]) 
            Qi.pop_back(); 


        Qi.push_back(i); 
    } 
    
    long int minDiff = INT_MAX; 
    

    for (; i < n; ++i) { 

        minDiff = min(minDiff, arr[Qi.front()]); 
 
        while ((!Qi.empty()) && Qi.front() <= i - k) 
            Qi.pop_front(); 
 
        while ((!Qi.empty()) && 
                arr[i] >= arr[Qi.back()]) 
            Qi.pop_back(); 


        Qi.push_back(i); 
    } 


    minDiff = min(minDiff, arr[Qi.front()]); 
    return minDiff; 
} 


int minimumAdjacentDifference(vector<long int> &a,long int n,long int k) 
{ 

    vector<long int> diff; 
    for (long int i = 0; i < n - 1; i++) { 
        diff.push_back(a[i + 1] - a[i]); 
    } 

 
    long int answer = findKMin(diff, n - 1, n - k - 1); 
    return answer; 
} 


int main() 
{ 
    long int N,R,temp; 

    cin>>N;
    cin>>R;
 
    vector<long int> planetSet;

    for(long int x=0;x<N;x++)
    {
        cin>>temp;
        planetSet.push_back(temp);

    }
 
    cout<<minimumAdjacentDifference(planetSet, N, R); 
    return 0; 
}

