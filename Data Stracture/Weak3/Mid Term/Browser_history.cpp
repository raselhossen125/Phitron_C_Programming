#include <bits/stdc++.h>
using namespace std;

void result(list<string> &addresses, int q)
{
    string c, a;
    auto it = addresses.begin();

    while (q--)
    {
        cin >> c;
        if (c == "visit")
        {
            cin >> a;
            auto found = find(addresses.begin(), addresses.end(), a);
            if (found != addresses.end())
            {
                it = found;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (c == "next")
        {
            ++it;
            if (it != addresses.end())
            {
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
                --it;
            }
        }
        else if (c == "prev")
        {
            if (it != addresses.begin())
            {
                --it;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
}

int main()
{
    list<string> addresses;
    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        else
        {
            addresses.push_back(val);
        }
    }
    int q;
    cin >> q;
    result(addresses, q);
    return 0;
}
