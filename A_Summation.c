#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    int sum=0;
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    if(sum<-1){
        printf("%d",(-1*sum));
    }
    else{
        printf("%d",sum);
    }
    return 0;
}