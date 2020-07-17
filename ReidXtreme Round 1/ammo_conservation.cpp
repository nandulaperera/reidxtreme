#include<stdio.h>

int main(){
	
	//get inputs
	int n,b;
	float hMax;
	
	scanf("%d %f",&n,&hMax);
	
	scanf("%d",&b);
	
	//constraints
	if(n<1000 && b<1000){
	
	//data structures and filling the inputs
	float r[2];
	float d[3];
	scanf("%f %f",&r[0],&r[1]);
	scanf("%f %f %f",&d[0],&d[1],&d[2]);
	
	int i;				//iterator
	//if there are none
	if(n==0){
		printf("0");
	}else{	
		float targets[n];	//array to keep store of data
		
		for(i=0;i<n;i++){
			scanf("%f",&targets[i]);
		}
		
		int ammoCount=0;
		for(i=0;i<n;i++){
			float damage=0;
			float hit;	//temp variable
			//getting damage per bullet
			if(targets[i]<=r[0]){
				hit=d[0];
			}else if(targets[i]<=r[1]){
				hit=d[1];
			}else if(targets[i]>r[1]){
				hit=d[2];
			}
			while(damage<hMax){
				damage+=b*hit;
				ammoCount+=b;
			}
			
		}
		//print output
		printf("%d",ammoCount);
		}
		return 0;
	}
}
