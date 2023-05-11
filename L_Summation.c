#include <stdio.h>

int printer ( long long int a[],int n,int i,long long int sum){
    if(i==n){
        return sum;
    }
    sum=sum+a[i];
    return sum = printer(a,n,i+1,sum);

}

int main(){
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    long long int s=0;
    s = printer(a,n,0,s);
    printf("%lld\n",s);
    return 0;
}