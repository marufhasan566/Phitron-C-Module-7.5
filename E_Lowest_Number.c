#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int minValue = INT_MAX;
    int arrPos;
    for (int i = 0; i < n; i++)
    {
        // printf("%d ",arr[i]);
        if (arr[i] < minValue)
        {
            minValue = arr[i];
            arrPos = i + 1;
        }
    }
    printf("%d %d\n", minValue, arrPos);

    return 0;
}