#include<stdio.h>
#include<string.h>

void sort(int [],int);

int check(int a,int b,int c){
    if(a==(b+c)||b==(a+c)||c==(a+b))
        return 0;
    else     
        return 1;
}
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a[100000];
        int al[26]={0};
        int count_al[26]={0};
        int count=0,flag=0,len,i;        
        scanf("%s",a);
        len=strlen(a);
        
        for(i=0;i<len;i++){
            al[a[i]-'a']++;    
        }
        
        for(i=0;i<26;i++){
            if(al[i]>0)
                count_al[count++]=al[i];
        } 
        
        if(count>2){
            for(i=2;i<count;i++){
                flag=check(count_al[i],count_al[i-1],count_al[i-2]);
                if(flag==1)
                    break;
            }    
        }
        
        if(flag==0)
            printf("Dynamic\n");
        else
            printf("Not\n");    
    }
    
    return 0;
}  
