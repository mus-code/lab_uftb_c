//8-11-26_problem2.c
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char name[]="showrov";
    for(int i=0;i<n;i++){
        printf("%d.%s\n",i+1,name);
    }
    return 0;
}