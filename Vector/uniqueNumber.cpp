#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> arr)
{
    int result = 0;
    for (int idx = 0; idx < arr.size(); idx++)
    {
        result ^= arr[idx]; // result = result ^ arr [idx];
    }

    return result;
}

int main()
{

    int arraySize;
    cout << "Enter the size of array: ";
    cin >> arraySize;

    vector<int> numbers(arraySize);

    for(int idx = 0; idx < numbers.size(); idx += 1) {
        cin >> numbers[idx]; 
    }

    int uniqueEle = findUniqueElement(numbers);
    cout << "Unique Element is: " << uniqueEle << endl;

    return 0;
}