#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your favourite no ->";
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++)
    {

        int cond = 0;

        if (i < n)
        {
            cond = i;
        }
        else
        {
            cond = n - (i % n) - 2;
        }

        for (int j = 0; j <= cond; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}