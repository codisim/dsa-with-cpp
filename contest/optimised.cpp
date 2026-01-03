#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    int fre[26] = {0};

    for (char c : s)
    {
        fre[c - 'a']++;
    }

    for (char c : s)
    {
        if (fre[c - 'a'] == 1)
        {
            cout << c << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}