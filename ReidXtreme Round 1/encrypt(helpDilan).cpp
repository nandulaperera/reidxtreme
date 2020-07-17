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
	
		cin>>n>>k;

	
        char word[n+1];
//      
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin.getline(word,n+1);
        
        int outLength=(n*8)+k-1;
        int output[outLength];
        for(int j=0;j<outLength;j++) output[j]=0;
        int length=strlen(word);
        int i;
//			
		int iniBit[outLength];
        for(int i=0;i<n;i++){
			int val=word[i];
			for(int j=((i+1)*8)-1 ;j>=i*8;j--){
				iniBit[j]=val%2;
				output[j]=val%2;
				val/=2;
			} 
        }
//        for(int j=0;j<n*8;j++) cout<<iniBit[j];
		for(int a=0;a<k-1;a++){
			for(int j=(n*8)+a;j>a;j--){
				iniBit[j]=iniBit[j-1];
				output[j]=(output[j]+iniBit[j])%2;
			}
			iniBit[a]=0;
		}
		for(int j=0;j<outLength;j++) cout<<output[j];
        printf("\n");
	    
		
        

    return 0;
}
