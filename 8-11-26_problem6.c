//8-11-26_problem6.c
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int divisor[n],count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){divisor[count]=i;
            count++;}
    }
    for(int j=0;j<count;j++){
        printf("%d\n",divisor[j]);
    }
    return 0;
}