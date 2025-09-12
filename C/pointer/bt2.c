#include <stdio.h>
int findmax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int findmin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {1, 10, -5, 96, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Gia tri lon nhat: %d\n", findmax(arr, n));
    printf("Gia tri nho nhat: %d\n", findmin(arr, n));
    return 0;
}