#include <bits/stdc++.h>
using namespace std;

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

// Input: nums = [5,4,-1,7,8]
// Output: 23
// Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.

int main()
{

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] + nums[i + 1] > INT_MIN)
        {
            result += nums[i];
        }
    }

    cout << result << endl;

    return 0;
}