#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(vector<int> nums) {

    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end-start)/2;

    int ans = -1;

    while(start <= end) {
        if(nums[mid] - nums[mid-1] == 1) {

        }
    }
}

int main() {

    vector<int> nums{1,2,3,4,6,7,8}; // TODO: test case is nums{1,3,4,5,6,7,8};

    int result = findMissingElement(nums);

    cout << "Missing element is " << result << endl;


    return 0;
}