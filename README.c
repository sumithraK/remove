#include<stdio.h>   
int main(){ 
int n,i,t; 
scanf("%d",&n); 
int a[n]; 
for(i=0;i<n;i++) { 
scanf("%d",&a[i]); 
}
scanf("%d",&t);  
for(i=0;i<n;i++) { 
if(a[i]!=t){     
printf("%d ",a[i]);  }    
}   
return 0; }
