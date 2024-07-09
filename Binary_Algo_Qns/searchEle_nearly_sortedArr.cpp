#include <iostream>
#include <vector>
using namespace std;

// NOTE:
// Concept of nearly sorted array is: let's arr[] = {2,10,8,13,17,15}
// First sort the array: {2,8,10,13,15,17}
// The original arr's element may be at the idx, idx-1 and idx+1 of sorted array it means ur array is   nearly sorted

int findElementInNearlySortedArray(vector<int> v, int target)
{

    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (v[mid] == target)
        {
            return mid;
        }

        if (mid - 1 >= start && v[mid - 1] == target)
        {
            return mid - 1;
        }

        if (mid + 1 < v.size() && v[mid + 1] == target)
        {
            return mid + 1;
        }

        if (target > v[mid])
        {
            // search in right
            start = mid + 2;
        }
        else
        {
            end = mid - 2;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    vector<int> nearySortedArr{2, 10, 8, 13, 17, 15};

    cout << "Enter the element for search in array: ";
    int searchEle;
    cin >> searchEle;

    int index = findElementInNearlySortedArray(nearySortedArr, searchEle);

    cout << "Element present at " << index << " Index" << endl;

    return 0;
}