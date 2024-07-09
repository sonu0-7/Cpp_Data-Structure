#include<bits/stdc++.h>
using namespace std;

// parameterized approch
void firstNsum(int i, int sum) {
    if(i < 1) {
        cout << sum;
        return;
    }

    firstNsum(i - 1, sum + i);
}

// functional approch
int sumUsingFunctional(int n) {
    if(n == 0) return 0;
    return n + sumUsingFunctional(n - 1);
} 

int main() {

    cout << "Enter the number for first sum of number : ";
    int n;
    cin>>n;

    // firstNsum(n, 0);

    cout<< sumUsingFunctional(5); 

    return 0;
}