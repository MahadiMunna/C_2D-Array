#include <stdio.h>

void printer ( int n,int i){
    if(i==n){
        return;
    }
    i++;
    printer(n,i);
    if(i==1){
        printf("%d",i);
    }else{
    printf("%d ",i);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printer(n,0);
    return 0;
}