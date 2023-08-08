#include <stdio.h>
int main()
{
    // Taking All The Inputs
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);
    // Performing Operations
    array[index] = array[index] + value;
    // Reverse Print Using For Loop
    //  for (int i = n - 1; i != -1; i--)
    //  {
    //      printf("%d ", array[i]);
    //  }
    // Reverse Print Using While Loop
    while (n--)
    {
        // printf("%d ", n);
        printf("%d ", array[n]);
    }

    return 0;
}