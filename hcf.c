#include<stdio.h>
int main(){
int a,b,hcf,x;
printf("Entre the value of the number of rows you wnats\n");
scanf("%d %d",&a,&b);
hcf=(a<b)?a:b;
for(int i=1;i<=hcf;i++){
    if(hcf%i==0){
        x=i;
    }
}
printf("The value of the hcf is %d\n",x);
return 0;
}