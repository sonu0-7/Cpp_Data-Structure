#include <bits/stdc++.h>
using namespace std;

int findSum(int A[], int N)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
        if (min > A[i])
        {
            min = A[i];
        }
    }
    return (max + min);
}

int main()
{
    int A[] = {-1, -2, -3, -4, -5};
    int N = 5;
    cout << findSum(A, N);
}
