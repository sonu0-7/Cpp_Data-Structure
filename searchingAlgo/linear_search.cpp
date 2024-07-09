#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int search)
{
    // TC: O(n)
    for (int idx = 0; idx < size; idx++)
    {
        if (arr[idx] == search)
        {
            return idx;
        }
    }

    return -1;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int searchElement = 3;

    int index = linearSearch(arr, size, searchElement);

    cout << "Search Element's index is " << index << endl;

    return 0;
}