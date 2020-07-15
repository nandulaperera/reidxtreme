#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int guard_flag = 0, theif_flag = 0, money_flag = 0;
	int count[3];
	vector<string> ans;
	
	int instance =0;
	cin>>instance;
	
	for(int i =0;i<instance;i++){
		int order = 0;
		count[0]=0;
		count[1]=0;
		count[2]=0;
		string str;
		cin>>str;
		for(int i =0; i<str.length();i++){
			if(str[i]=='G'){
				guard_flag = ++order;
				count[0]++;
			}else if(str[i] == '$'){
				money_flag = ++order;
				count[1]++;
			}else if(str[i] == 'T'){
				theif_flag = ++order;
				count[2]++;
			}
		}
	
		//combinations of ALERT 
		// T M G 
		// 1 2 3
		// 2 3 1
		// 2 1 3
		// 3 2 1
		//COMBINATION FOR QUIET
		// T M G
		// 3 1 2
		// 1 3 2
	
		//there can be n Guards so we need to thought for optimal solution
		if((guard_flag > money_flag and guard_flag < theif_flag) or (guard_flag < money_flag and guard_flag > theif_flag)){
			//cout<<"quiet";
			if(count[0]>=count[2]){
				ans.push_back("quiet");
			}else{
				ans.push_back("ALARM");
			}
			
		}else{
			//cout<<"ALARM";
			ans.push_back("ALARM");
		}
		//cout<<"\nT :"<<theif_flag<<" M : "<<money_flag<<" G : "<<guard_flag;
	}
	for(int j=0;j<ans.size();j++){
		cout<<ans[j]<<endl;
	}
	
	
	return 0;
}
