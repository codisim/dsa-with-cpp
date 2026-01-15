#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3};
    list<int> l2;
    // l2 = l;
    l2.assign(l.begin(), l.end());

    l.push_back(99);
    l.push_front(100);

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}