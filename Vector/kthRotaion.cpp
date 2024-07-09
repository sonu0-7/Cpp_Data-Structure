#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1st way
    vector<int> nums{1, 2, 3, 4, 5};
    vector<int> ans;
    int rightRotation = 7;

    int last = nums.size() - 1;

    if (nums.size() < rightRotation)
        rightRotation -= nums.size();

    int remainingEle = rightRotation;

    while (rightRotation < nums.size())
    {
        ans.push_back(nums[rightRotation]);
        rightRotation++;
    }
    int idx = 0;
    while (remainingEle != 0)
    {
        ans.push_back(nums[idx]);
        idx++;
        remainingEle--;
    }

    for (auto val : ans)
        cout << val << " ";

    cout << endl;

// 2nd way
    vector<int> rotationArr{1, 2, 3, 4, 5};
    vector<int> result;

    int leftRotation = 7;
    if (leftRotation > rotationArr.size())
    {
        leftRotation -= rotationArr.size();
    }

    int restEle = rotationArr.size() - 1 - leftRotation;
    leftRotation = rotationArr.size() - leftRotation;

    while (leftRotation < rotationArr.size())
    {
        result.push_back(rotationArr[leftRotation]);
        leftRotation++;
    }

    int index = 0;
    while (restEle >= 0)
    {
        result.push_back(rotationArr[index]);
        restEle--;
        index++;
    }

    // print the rotational array:
    for (auto val : result)
        cout << val << " ";

    return 0;
}