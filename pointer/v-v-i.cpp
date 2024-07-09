#include <iostream>
using namespace std;

int *solve()
{
    int a = 5;
    int *ans = &a;
    // cout << "ans -> " << ans << endl;
    // cout << "*ans -> " << *ans << endl;

    return ans;
}

int main()
{
    int *result = solve();  // Once the function executed then local variable destroyed
    cout << "*solve() -> " << *solve() << endl; // here prints the val that is 5
    cout << "solve() -> " << solve() << endl;   // Return's the memory location's.
    // cout << result << endl;   // It's return the same memory location that was returning solve methods.
    cout << "*result -> " << *result << endl; // here's retrun the garbage value of this coz local var has destroyed.
    return 0;
}
