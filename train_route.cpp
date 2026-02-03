#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> route;
    string station;
    while (cin >> station)
    {
        if (station == "end")
        {
            break;
        }
        route.push_back(station);
    }

    auto current_station = route.end();
    int query;
    cin >> query;
    while (query--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "visit")
        {
            string find_station_name;
            cin >> find_station_name;

            int flag = 0;
            for (auto it = route.begin(); it != route.end(); it++)
            {
                if (*it == find_station_name)
                {
                    cout << *it << endl;
                    current_station = it;
                    flag = 1;
                }
            }

            if (!flag)
                cout << "Not Available";
        }
        else if (cmd == "next")
        {
            if (current_station == route.end())
            {
                cout << "Not Available";
            }
            else
            {
                cout << *next(current_station) << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (current_station == route.begin() || current_station == route.end())
            {
                cout << "Not Available";
            }
            else
            {
                cout << *prev(current_station) << endl;
            }
        }
    }

    return 0;
}