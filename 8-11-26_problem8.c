//8-11-26_problem8.c
#include<stdio.h>
int gcd(int a,int b){
    if(b==0){return a;}   
    return gcd(b,a%b);
}
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("GCD=%d\n",gcd(m,n));
    return 0;
}
