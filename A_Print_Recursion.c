#include <stdio.h>

void printer ( int n,int i){
    if(i==n){
        return;
    }
    printf("I love Recursion\n");
    i++;
    printer(n,i);
}

int main(){
    int n;
    scanf("%d",&n);
    printer(n,0);
    return 0;
}