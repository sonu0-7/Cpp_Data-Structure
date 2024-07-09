#include <iostream>
using namespace std;

int findQuotient(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start) / 2;
    int quotient = -1;

    while (start <= end)
    {
        if (abs(divisor) * mid == abs(dividend))
        {
            quotient = mid;
            break;
        }

        if (mid * abs(divisor) > abs(dividend))
        {
            // search in left
            end = mid - 1;
        }
        else
        {
            // store the quotient
            quotient = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
    {
        return quotient;
    }
    else
    {
        return -quotient;
    }
}

int main()
{

    int dividend = -22;
    int divisor = 7;

    int quotient = findQuotient(dividend, divisor);

    cout << "Quotient is " << quotient << endl;

    return 0;
}