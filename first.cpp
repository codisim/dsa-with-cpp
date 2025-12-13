#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;

    
    // using loop
    // for (int i = 0; i <= n; i++)
    // {
    //     total += i;
    // }

    
    // using formula
    total = (n * (n + 1)) / 2;

    cout << total;

    return 0;
}