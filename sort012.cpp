#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n)

{

    int z = 0, o = 0, t = 0;

    for (int i = 0; i < n; i++)

    {

        if (arr[i] == 0)

        {

            z++;
        }

        else if (arr[i] == 1)

        {

            o++;
        }

        else
        {

            t++;
        }
    }

    int i = 0;

    int j = 0;

    while (j < z)

    {

        arr[i++] = 0;

        j++;
    }

    j = 0;

    while (j < o)

    {

        arr[i++] = 1;

        j++;
    }

    j = 0;

    while (j < t)

    {

        arr[i++] = 2;

        j++;
    }
}

int main()
{
    int arr[] = {0, 1, 2, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    return 0;
}