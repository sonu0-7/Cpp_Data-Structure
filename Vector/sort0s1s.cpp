#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};

    int init = 0;
    int end = arr.size() - 1;

    while (init <= end)
    {

        if (arr[init] == 0)
        {
            init++;
        }
        if (arr[init] == 1)
        {
            if (arr[end] == 0)
            {
                swap(arr[init], arr[end]);
                init++;
                end--;
            }
            else
            {
                end--;
            }
        }
    }

    for (auto value : arr)
        cout << value << " ";

    return 0;
}