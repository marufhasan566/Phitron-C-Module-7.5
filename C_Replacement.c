#include<stdio.h>
int main()
{
    // int N;
    // scanf("%d",&N);
    // int A[N];
    // for(int i=0;i<N;i++){
    //     scanf("%d", &A[N]);
    // }
    // for(int i=0;i<N;i++){
    //     printf("%d ", A[i]);
    // }
    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        // printf("%d ",arr[i]);
        if(arr[i]>0){
        printf("1 ");
        }
        else if(arr[i]<0){
        printf("2 ");
        }
        else if(arr[i]==0){
        printf("0 ");
        }
    }
    return 0;
}