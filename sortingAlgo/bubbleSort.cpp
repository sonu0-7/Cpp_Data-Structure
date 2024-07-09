#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{10, 80, 60, 70, 30, 50, 20};
    int length = arr.size();

    cout << "Initial array is : ";
    for (auto val : arr)
        cout << val << " ";
    cout << endl;

    cout << "Analysis of Bubble sort: " << endl;
    // process here
    bool swapped = false;
    for (int round = 1; round < length; round++)
    {

        for (int j = 0; j < length - round; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                for (auto va : arr)
                    cout << va << " ";
                cout << endl;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }

    cout << "After sorting array is : ";
    for (auto va : arr)
        cout << va << " ";
    cout << endl;

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr{10, 1, 7, 6, 14, 9};

//     int n = arr.size();
//     // Bubble Sort
//     for (int round = 1; round < n; round++)
//     {
//         int swapCount = 0;
//         for (int j = 0; j < n - round; j++)
//         {

//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//                 swapCount++;
//             }
//         }
//         if (swapCount == 0)
//         {
//             // sort ho chuka hai, no need to check in further rounds
//             break;
//         }
//     }

//     // prninting
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }