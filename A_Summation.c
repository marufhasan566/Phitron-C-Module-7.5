#include<stdio.h>
int main()
{
    long long int N;
    scanf("%lld",&N);
    long long int A[N];
    long long int sum=0;
    for(int i=0;i<N;i++){
        scanf("%lld",&A[i]);
        sum=sum+A[i];
    }
    if(sum<-1){
        printf("%lld",(-1*sum));
    }
    else{
        printf("%lld",sum);
    }
    return 0;
}