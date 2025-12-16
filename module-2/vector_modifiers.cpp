#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 7, 8};
    vector<int> v3 = {4, 5, 6};

    vector<int> v2;
    v2 = v;
    // v2.insert(v2.begin() + 3, 4);
    v2.insert(v2.begin() + 3, v3.begin(), v3.end());

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    for (int x : v2)
        cout << x << " ";

    return 0;
}