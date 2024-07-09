#include<bits/stdc++.h>
using namespace std;

// parameterized
int factorial = 1;
int factParam(int i, int n) {
    if(i > n) return 1;
    factorial *= i;
    factParam(i+1, n);
    return factorial;
}

// functionalized
int fact(int n) {
    if(n == 0) return 1;
    return n * fact(n - 1);
}

int main() {

    cout << "Enter the Number for factorial: ";
    int n;
    cin >> n;

    cout << fact(n) << endl;
    cout << factParam(1, n);

    return 0;
}