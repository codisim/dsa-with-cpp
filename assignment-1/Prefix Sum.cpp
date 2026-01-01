#include <bits/stdc++.h>
using namespace std;


void print_recerce_recursion(vector<long long> &prefix, int n)
{
    if (n < 0)
    {
        return;
    }

    cout << prefix[n] << ' ';

    print_recerce_recursion(prefix, n - 1);
}

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<long long> prefix(n);
    prefix[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }


    print_recerce_recursion(prefix, n-1);

    return 0;
}