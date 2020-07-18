#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	string str,demo;
	int i,j,flag=0;
	char temp;
	//getline(cin,demo);
	getline(cin,str);
	int a = str.length();
		
	for(i=0;i<a;i++){
		temp = str[i];
		for(j=i+1;j<a;j++){
			if(temp == str[j]){
				cout<<"Reid Siri"<<endl;
				flag = 1;
				break;
			}
		}
		if(flag){
			break;
				//cout<< "Unique" <<endl;
		}
	}
	if(flag==0){
		cout<<"Unique"<<endl;
	}	
	
	
	return 0;
}
