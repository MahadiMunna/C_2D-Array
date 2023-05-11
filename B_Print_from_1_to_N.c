#include <stdio.h>

void printer ( int n,int i){
    if(i==n+1){
        return;
    }
    printf("%d\n",i);
    i++;
    printer(n,i);
}

int main(){
    int n;
    scanf("%d",&n);
    printer(n,1);
    return 0;
}