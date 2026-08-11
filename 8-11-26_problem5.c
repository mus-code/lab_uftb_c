//8-11-26_problem5.c
#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i+=2){
        printf("%d\n",i);
    }
    return 0;
}