#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<vector<int>> &v, int searchEle)
{
    int rows = v.size();    // return rows
    int cols = v[0].size(); // return no's of elements it means cols

    int start = 0;
    int end = rows * cols - 1;
    int mid = rows + (cols - rows) / 2;

    while (start <= end)
    {
        int rowIdx = mid / cols;
        int colIdx = mid % cols;

        if (v[rowIdx][colIdx] == searchEle)
        {
            cout << searchEle << " Found at " << rowIdx << " Rows & " << colIdx << " Cols " << endl;
            return true;
        }

        if (v[rowIdx][colIdx] > searchEle)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return false;
}

int main()
{
    // vector<vector<int> > v(3, vector<int> (5,0));
    // vector<vector<int> > v {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    vector<vector<int>> v{{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

    // for(int i=0; i<3; i++) {
    //     for(int j= 0; j<4; j++) {
    //         cout << v[i][j] << " ";
    //     } cout << endl;
    // }
    cout << "Enter the number for search in array: ";
    int target;
    cin >> target;

    if (binarySearch(v, target))
    {
        cout << "Here we go, Found" << endl;
    }
    else
    {
        cout << "Here we go, Not Found" << endl;
    }
    return 0;
}
