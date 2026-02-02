#include <bits/stdc++.h>
using namespace std;

//  need to determine whether the stack and queue are the same or not based on the order

int main()
{
    stack<int> st;
    queue<int> q;

    int stn;
    cin >> stn;

    int qn;
    cin >> qn;

    for (int i = 0; i < stn; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < qn; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    
    if (q.size() != st.size())
    cout << "NO";
    
    else if (q.size() == st.size())
    {
        int flag = 1;
        while (!st.empty() && !q.empty())
        {
            if (st.top() != q.front())
            {
                cout << "NO";
                flag = 0;
                break;
            }
            else
            {
                st.pop();
                q.pop();
            }
        }
        

        if(flag)
            cout << "YES";

    }

    return 0;
}

//   else if(q.size() == st.size())