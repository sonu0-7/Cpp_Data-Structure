// NOTE: Binary search can apply when the order of element is monotonic. monotonic means either ascending or descending.

#include <iostream>
#include <vector>
using namespace std;

// Pivot elememt maximum number
int findPivotElement(vector<int> &nums)
{

    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (mid + 1 < nums.size() && nums[mid] > nums[mid + 1])
        {
            return mid;
        }

        if (mid - 1 >= 0 && nums[mid] < nums[mid - 1])
        {
            return mid - 1;
        }

        if (nums[mid] > nums[start])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

// pivot element minimum number
int pivotElement(vector<int> &nums)
{

    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (mid + 1 < nums.size() && nums[mid] > nums[mid + 1])
        {
            return mid + 1;
        }

        if (mid - 1 >= 0 && nums[mid] < nums[mid - 1])
        {
            return mid;
        }

        if (nums[mid] > nums[start])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    vector<int> nums{3, 4, 5, 6, 7, 1, 2};

    int result = findPivotElement(nums);
    int result1 = pivotElement(nums);

    cout << "Max Pivot element is " << nums[result] << endl;
    cout << "Min Pivot element is " << nums[result1] << endl;

    return 0;
}