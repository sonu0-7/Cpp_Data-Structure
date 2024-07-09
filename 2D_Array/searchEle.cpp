#include <iostream>
using namespace std;

bool searchElement(int ref2D_A[][3], int row, int col, int key)
{

    for (int idx = 0; idx < row; idx++)
    {

        for (int jdx = 0; jdx < col; jdx++)
        {
            if (ref2D_A[idx][jdx] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    cout << "Enter the size of 2D array size: ";
    int row, col;
    cin >> row >> col;
    int arr_2D[row][col];

    for (int idx = 0; idx < row; idx++)
    {

        for (int jdx = 0; jdx < col; jdx++)
        {
            cin >> arr_2D[idx][jdx];
        }
    }

    cout << "Printing the taken 2D array element: " << endl;
    for (int idx = 0; idx < row; idx++)
    {

        for (int jdx = 0; jdx < col; jdx++)
        {
            cout << arr_2D[idx][jdx] << " ";
        }
        cout << endl;
    }

    cout << "Enter the key that you wanna search in array: ";
    int key;
    cin >> key;

    if (searchElement(arr_2D, row, col, key))
        cout << "True";
    else
        cout << "False";

    return 0;
}
