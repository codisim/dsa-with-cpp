#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> l = {1, 2, 3, 4, 5, 6};
    // l.remove(4);

    l.sort(greater<int>());

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}