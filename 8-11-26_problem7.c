//8-11-26_problem7.c
#include<stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int divisor[n],count=0;
    for(int i=m;i<=n;i++){
        if(i%2==0 || i%3==0 || i%7==0){
            divisor[count]=i;
            count++;
        }
    }
      for(int j=0;j<count;j++){
        printf("%d\n",divisor[j]);
    }
    return 0;
}