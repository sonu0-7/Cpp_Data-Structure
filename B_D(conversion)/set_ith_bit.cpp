#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the favourite no ->";
    cin >> n;

    int permanent_n = n;

    int result = 0;
    int power = 0;
    int rem = 0;
    while (n > 0)
    {
        rem = n % 2;
        n = n / 2;
        result += rem * pow(10, power++);
    }
    cout << permanent_n << " Binary no is ->" << result << endl;

    // Now i'm going to set the ith bit
    int setBit;
    cout << "Please enter no which bit, you want to set ->";
    cin >> setBit;

    int mask = 1 << setBit;
    int update_res = permanent_n | mask;

    cout << permanent_n << " becomes " << update_res;
}