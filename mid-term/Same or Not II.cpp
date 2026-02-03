#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> a;
    queue<int> b;

    int n;
    cin >> n;

    int m;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push(x);
    }

    if (a.size() != b.size())
        cout << "NO";

    else if (a.size() == b.size())
    {
        int flag = 1;
        while (!a.empty() && !b.empty())
        {
            if (a.top() != b.front())
            {
                cout << "NO";
                flag = 0;
                break;
            }
            else
            {
                a.pop();
                b.pop();
            }
        }

        if (flag)
            cout << "YES";
    }

    return 0;
}
