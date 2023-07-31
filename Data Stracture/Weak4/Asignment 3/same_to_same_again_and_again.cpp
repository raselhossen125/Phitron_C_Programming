#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stack;
    queue<int> queue;
    int n, m;
    cin >> n;
    cin >> m;
    while (n--)
    {
        int val;
        cin >> val;
        stack.push(val);
    }
    while (m--)
    {
        int val;
        cin >> val;
        queue.push(val);
    }
    bool flag = true;
    int s = stack.size();
    if (stack.size() == queue.size())
    {
        for (int i = 0; i < s; i++)
        {
            if (stack.top() != queue.front())
            {
                flag = false;
                break;
            }
            else
            {
                stack.pop();
                queue.pop();
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}