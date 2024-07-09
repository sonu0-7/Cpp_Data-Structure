#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr{10, 28, 24, 6, 34, 18, 38, 44};
    int length = arr.size();

    cout << "Initial array is : ";
    for (auto val : arr)
        cout << val << " ";
    cout << endl;

    cout << "Analysis of selection sort: " << endl;
    for (int round = 0; round < length - 1; round++)
    {

        for (int j = round + 1; j < length; j++)
        {

            if (arr[round] > arr[j])
            {
                swap(arr[round], arr[j]);

                // printing each steps
                for (auto val : arr)
                    cout << val << " ";
                cout << endl;
            }
        }
    }

    cout << "After sorting array is : ";
    for (auto va : arr)
        cout << va << " ";
    cout << endl;

    return 0;
}

// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> arr{5,4,3,2,1};
//     int n = arr.size();
//     //selection sort
//     //outer loop -> (n-1) rounds
//     for(int i=0; i<n-1; i++) {

//         int minIndex = i;
//         //inner Loop -> index of minimum element in range i->n
//         for(int j=i+1; j<n; j++) {
//             if(arr[j] < arr[minIndex]) {
//                 //new minimum, then store
//                 minIndex = j;
//             }
//         }
//         //swap
//         swap(arr[i], arr[minIndex]);
//         for (auto val : arr)
//                     cout << val << " ";
//                 cout << endl;
//     }

//     //printing
//     // for(int i=0; i<n; i++) {
//     //     cout << arr[i] << " ";
//     // }cout << endl;

//   return 0;
// }