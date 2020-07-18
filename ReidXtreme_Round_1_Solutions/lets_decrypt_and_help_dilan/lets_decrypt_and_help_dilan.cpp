#include <iostream>
#include<stdio.h>
#include <string.h>
#include <math.h>
// for <streamsize> 
#include<ios>      
  
// for numeric_limits 
#include<limits>  
using namespace std;

int main(){
	int n,l,k;
		cin>>n>>l>>k;
		
	
	   		char encrypt[l+1];
	        cin.ignore(numeric_limits<streamsize>::max(),'\n');
	        cin.getline(encrypt,l+1);
	        int encBits[l];
	        for(int a=0;a<l;a++) encBits[a]=encrypt[a]-48;
	        for(int a=1;a<l;a++){
	        	if(a<k-1){
	        		int x=0;
	        		for(int j=0;j<a;j++){
	        			x=(x+encBits[j])%2;
					}
					encBits[a]=(encBits[a]+x)%2;
				}
				else{
					int x=0;
					for(int j=a-(k-1);j<a;j++){
	        			x=(x+encBits[j])%2;
					}
					encBits[a]=(encBits[a]+x)%2;
				}
				
			}
			int message[n];
			for(int j=0;j<n;j++) message[j]=0;
	        for(int j=0;j<n;j++){
	        	int p=0;
	        	for(int a=((j+1)*8)-1;a>=j*n;a--,p++){
	        		message[j]+=(encBits[a]*pow(2,p));
				}
			}
			char messageOut[n];
			for(int j=0;j<n;j++) messageOut[j]=message[j];
			
			for(int j=0;j<n;j++) cout<<messageOut[j];
	        printf("\n");
	    

    return 0;
}
