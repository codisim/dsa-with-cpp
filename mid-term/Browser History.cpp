#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> address;
    string station;
    while (cin >> station)
    {
        if (station == "end")
        {
            break;
        }
        address.push_back(station);
    }

    auto current_address = address.begin();
    int q;
    cin >> q;

    while (q--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string find_address;
            cin >> find_address;

            auto it = find(address.begin(), address.end(), find_address);
            ;

            if (it != address.end())
            {
                cout << *it << endl;
                current_address = it;
            }
            else

                cout << "Not Available" << endl;
        }
        else if (cmd == "next")
        {
            if (current_address != address.end() && next(current_address) != address.end())
            {
                current_address++;
                cout << *current_address << endl;
                // cout << *next(current_address) << endl;
            }
            else
                cout << "Not Available" << endl;
            {
            }
        }
        else if (cmd == "prev")
        {
            if (current_address == address.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current_address--;
                cout << *current_address << endl;
                // cout << *prev(current_address) << endl;
            }
        }
    }

    return 0;
}