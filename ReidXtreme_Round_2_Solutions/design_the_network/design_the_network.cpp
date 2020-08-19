#include <iostream>
#include <cstring>

using namespace std;

int main(){
	//No. of messages
	int T;
	cin >> T;
	
	for(int i = 0; i<T; i++){
		//No.of computers in the network
		int N;
		cin >> N;
		
		string R,S;
		cin >> R;
		cin >> S;
		
		int C[N][N];
		memset(C, 0, sizeof(C));
		
		int j,k;
		
		for(j = 0; j<N; j++){
			
			k = j;
			
			for(;;){
				
				C[j][k] = 1;
				
				if (k + 1 == N || S[k] == 'N' || R[k + 1] == 'N')
			    	break;
			    k++;
			}
		}
		
		for(int j = 0; j<N; j++){
			
			k = j;
			
			for(;;){
				
				C[j][k] = 1;
				
				if (k - 1 < 0 || S[k] == 'N' || R[k - 1] == 'N')
			    	break;
			    k--;
			}
		}
		cout<<"Message #"<<(i+1)<<":"<<endl;
		for(int j = 0; j<N; j++){
			for(int k = 0; k<N; k++){
				cout<<(C[j][k] ? 'Y' : 'N');
			}
			cout<<endl;
		}
	}
	return 0;
}
