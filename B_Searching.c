#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int X;
    scanf("%d", &X);
    for (int i = 0; i < N; i++)
    {
        // যদি X এর মান Array এর কোন Element এর সাথে মিলে যায় তাহলে নিচের কন্ডিশনে প্রবেশ করবে।
        if (X == A[i])
        {
            printf("%d\n", i);
            break;
        }
        // যেহেতু আগের কন্ডিশনে প্রবেশ করেনি তাই নিচের কন্ডিশন দ্বারা বুঝাচ্ছে যে আমার সবগুলো Array Element চেক করা শেষ এবং চেক করা শেষ বলে আমি -1 প্রিন্ট করে দিচ্ছি।
        if (i == N - 1)
        {
            printf("-1");
        }
    }

    return 0;
}
