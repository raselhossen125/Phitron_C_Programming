#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    queue<string> queue;
    while (n--)
    {
        int q;
        cin >> q;
        if (q == 0)
        {
            string name;
            cin >> name;
            queue.push(name);
        }
        else
        {
            if (queue.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << queue.front() << endl;
                queue.pop();
            }
        }
    }
    return 0;
}