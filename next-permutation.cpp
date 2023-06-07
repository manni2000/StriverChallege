#include <bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)

{

    //  Write your code here.

    int idx1 = -1;

    for (int i = n - 2; i >= 0; i--)
    {

        if (permutation[i] < permutation[i + 1])
        {

            idx1 = i;

            break;
        }
    }

    if (idx1 == -1)
    {

        reverse(permutation.begin(), permutation.end());
    }

    else
    {

        int idx2 = -1;

        for (int i = n - 1; i > idx1; i--)
        {

            if (permutation[i] > permutation[idx1])
            {

                idx2 = i;

                break;
            }
        }

        swap(permutation[idx1], permutation[idx2]);

        reverse(permutation.begin() + idx1 + 1, permutation.end());
    }

    return permutation;
}

int main()
{
    std::vector<int> permutation = {1, 3, 2};
    int n = permutation.size();

    std::vector<int> result = nextPermutation(permutation, n);
    for (auto num : result)
    {
        std::cout << num << " ";
    }
    std::cout << endl;
    return 0;
}