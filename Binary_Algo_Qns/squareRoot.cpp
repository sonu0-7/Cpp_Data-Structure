#include <iostream>
using namespace std;

int findSqureRoot(int number)
{
    int start = 0;
    int end = number;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == number)
        {
            return mid;
        }

        if (mid * mid > number)
        {
            end = mid - 1;
        }
        else
        {
            // store the value
            ans = mid;
            // search right
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    cout << "Enter the number for squareRoot : ";
    int number;
    cin >> number;

    int root = findSqureRoot(number);
    cout << "Root of " << root << endl;

    cout << "Enter the precision for decimal digit : ";
    int precision;
    cin >> precision;

    float step = 0.1;
    double precisionAns;

    double finalNumber = number;

    for (int i = 1; i <= precision; i++)
    {

        for (double j = root; j * j <= finalNumber; j += step)
        {
            precisionAns = j;
        }

        step /= 10;
    }

    cout << "Root as per expected precision " << precisionAns << endl;

    return 0;
}
