#include <bits/stdc++.h>
using namespace std;

vector<int> ascDescOrderSort(vector<int> &v, char sign, int n)
{
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        res.push_back(v[i]);
    }
    if ('<' == sign)
    {
        for (int i = 0; i < n; i++)
        {
            int a = i;
            for (int j = i + 1; j < n; j++)

                if (res[j] < res[a])
                    a = j;
            int t = res[a];
            res[a] = res[i];
            res[i] = t;
        }
    }
    return res;
}

int main()
{
    vector<int> v = {2, 5, 1, 3, 7, 9, 10};
    char sign = '<';

    vector<int> res = ascDescOrderSort(v, sign, v.size());
    for (int i = 0; i < v.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}