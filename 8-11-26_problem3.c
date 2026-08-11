//8-11-26_problem3.c
#include<stdio.h>

int main(){
    int n;
    char name[]="showrov";
    scanf("%d",&n);
    if(n<=100){
    for(int i=0;i<n;i++){
        printf("%d.%s\n",i+1,name);
    }
    }
    else{ for(int i=0;i<100;i++){
        printf("%d.%s\n",i+1,name);
    }
    }

    return 0;
}