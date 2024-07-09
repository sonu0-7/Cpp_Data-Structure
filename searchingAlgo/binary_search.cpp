#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    // TC: O(logn)

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    // int mid = (start + end)/2; might be interger overflow coz of 2^-31 to 2^31 -1, so avoid it

    while (start <= end)
    {
        int midElement = arr[mid];

        if (midElement == target)
        {
            return mid;
        }

        if (midElement > target)
        {
            // search in left
            end = mid - 1;
        }
        else
        {
            // search in right
            start = mid + 1;
        }

        mid = start + (start - end) / 2;
    }

    return -1;
}

int main()
{

    int sortingArr[] = {1, 3, 5, 7, 9, 13, 14, 15, 17};
    // int size = sizeof(sortingArr) / sizeof(sortingArr[0]);
    int size = 9;

    cout << "Enter the searching element: ";
    int searchingEle;
    cin >> searchingEle;

    int indexOfTarget = binarySearch(sortingArr, size, searchingEle);

    if (indexOfTarget == -1)
    {
        cout << "target not found" << endl;
    }
    else
    {
        cout << "target found at " << indexOfTarget << endl;
    }

    return 0;
}