#include <bits/stdc++.h> 
using namespace std; 

// Function to count no of collision 
long int count(string s) 
{ 
    long int N, cnt = 0, ans = 0; 

    // length of the string 
    N = s.length(); 

    for (long i = 0; i < N; i++) { 
        if (s[i] == 'R') 
            cnt++; 

        if (s[i] == 'L') 
            ans += cnt; 
    } 

    return ans; 
} 

// Driver code 
int main() 
{ 

    string s; 
    cin>>s;
    cout << count(s) << endl; 

    return 0; 
}

