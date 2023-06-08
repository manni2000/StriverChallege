#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{

    long long cnt = 0;
    long long Max = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += arr[i];
        Max = max(Max, cnt);

        if (cnt < 0)
            cnt = 0;
    }
    return Max;
}
int main()
{
    int arr[] = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    long long result = maxSubarraySum(arr, n);
    std::cout << result;

    return 0;
}