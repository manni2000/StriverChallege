#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i].resize(i + 1);
        ans[i][0] = ans[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
    }
    return ans;
}

int main()
{
    int n = 4;
    vector<vector<long long int>> result = printPascal(n);
    for (auto num : result)
    {
        for (auto res : num)
        {
            cout << res << " ";
        }
        cout << endl;
    }
    return 0;
}